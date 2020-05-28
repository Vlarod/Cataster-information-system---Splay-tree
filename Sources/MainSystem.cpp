#include "MainSystem.h"



SplayTree<std::string, CatasterArea>* MainSystem::getCatasterAreas_NA()
{
	return catasterAreas_NA;
}

SplayTree<int, CatasterArea>* MainSystem::getCatasterAreas_NU()
{
	return catasterAreas_NU;
}

SplayTree<std::string, Citizen>* MainSystem::getCitizens()
{
	return citizens;
}

void MainSystem::importData()
{
	//IMPORT CATASTER AREAS AND PROPERTIES

	std::string tmp;
	std::ifstream f("KUNEH.csv");
	int tmp2 = 0;
	int tmp1 = 0;
	//int riadok = 0;
	//Kraj * k;
	while (!f.eof()) {
		int pom = 0;
		tmp2 = 0;
		tmp1 = 0;
		getline(f, tmp);
		std::stringstream ss(tmp);
		std::string token;

		CatasterArea *cat = new CatasterArea();
		Property *prop;
		bool propCreate = false;
		while (getline(ss, token, ';')) {

			tmp2++;

			if (tmp2 == 1) {
				cat->setCatasterName(token);
			}
			if (tmp2 == 2) {
				cat->setCatasterNumber(stoi(token));
				catasterAreas_NA->insert(cat->getCatasterName(), cat);
				catasterAreas_NU->insert(cat->getCatasterNumber(), cat);
			}
			if (tmp2 == 3) {
				tmp1++;
				if (propCreate == false) {
					prop = new Property();
					propCreate = true;
				}
				if (tmp1 == 1) {
					prop->setIdNumber(stoi(token));
				}
				if (tmp1 == 2) {
					prop->setAdress(token);
				}
				if (tmp1 == 3) {
					prop->setDescription(token);
					cat->getPropetries()->insert(prop->getId(), prop);
				}
				if (tmp1 == 4) {
					prop->setPropertyList(stoi(token));
					cat->getPropetries()->insert(prop->getId(), prop);
					tmp1 = 0;
					propCreate = false;
				}
				tmp2 = 2;
			}

		}


	}
	f.close();

}

void MainSystem::importData2()
{
	//IMPORT PROPERTY LISTS

	std::string tmp;
	std::ifstream f("LV.csv");
	int tmp2 = 0;
	int tmp1 = 0;
	//int riadok = 0;
	//Kraj * k;
	while (!f.eof()) {
		int pom = 0;
		tmp2 = 0;
		tmp1 = 0;
		getline(f, tmp);
		std::stringstream ss(tmp);
		std::string token;

		PropertyList *pl = new PropertyList();

		std::string catasterName;
		int propertyListId;
		int numberOfProperties;
		int curProp = 0;

		bool partCreated = false;

		Part *newPart;
		while (getline(ss, token, ';')) {

			tmp1++;

			if (tmp1 == 1) {
				pl->setCatasterName(token);
				catasterName = token;
			}
			if (tmp1 == 2) {
				pl->setPropertyListNumber(stoi(token));
			}
			if (tmp1 == 3) {
				numberOfProperties = stoi(token);
				pl->setNumberProperties(stoi(token));
			}
			if (tmp1 == 4) {
				CatasterArea *ca = catasterAreas_NA->tryFind(catasterName);
				pl->getPropertiesInPropertyList()->insert(ca->getPropetries()->tryFind(stoi(token))->getId(), ca->getPropetries()->tryFind(stoi(token)));
				numberOfProperties--;
				if (numberOfProperties > 0) {
					tmp1--;
				}
				
			}
			if (tmp1 == 5) {
				tmp2++;
				if (tmp2 == 1) {
					if (partCreated == false) {
						newPart = new Part();
						partCreated = true;
					}
					newPart->setOwner(token);
				}
				if (tmp2 == 2) {
					newPart->setPart(stod(token));
					pl->getParts()->insert(newPart->getOwner(),newPart);
					partCreated = false;
					catasterAreas_NA->tryFind(catasterName)->getPropetyLists()->insert(pl->getPropertyListNumber(),pl);
					propertyLists->insert(pl->getPropertyListNumber(), pl);
					tmp2 = 0;
				}
				tmp1 = 4;
			}
		}

	}



	f.close();
}

void MainSystem::importData3()
{
	//IMPORT CITIZENS

	std::string tmp;
	std::ifstream f("CIT.csv");
	int tmp2 = 0;
	int tmp1 = 0;
	//int riadok = 0;
	//Kraj * k;
	while (!f.eof()) {
		int pom = 0;
		tmp2 = 0;
		tmp1 = 0;
		getline(f, tmp);
		std::stringstream ss(tmp);
		std::string token;
		std::string nameCatasterArea;
		Citizen *citizen = new Citizen();
		while (getline(ss, token, ';')) {

			tmp1++;

			if (tmp1 == 1) {
				citizen->setNameLastName(token);
			}
			if (tmp1 == 2) {
				citizen->setIdNumber(token);
			}
			if (tmp1 == 3) {
				std::string day = token.substr(0, 2);
				std::string mounth = token.substr(2, 2);
				std::string year = token.substr(4, 4);
				tm newDB;
				newDB.tm_mday = stoi(day);
				newDB.tm_mon = stoi(mounth);
				newDB.tm_year = stoi(year);

				citizen->setDateOfBird(newDB);
			}
			if (tmp1 == 4) {
				nameCatasterArea = token;
				citizen->setCatasterAreaName(nameCatasterArea);
			}
			if (tmp1 == 5) {
				citizen->setStayProperty(catasterAreas_NA->tryFind(nameCatasterArea)->getPropetries()->tryFind(stoi(token)));
			}
			if (tmp1 == 6) {
				if (stoi(token) != 0) {
					citizen->getOwnPropertyLists()->push_back(propertyLists->tryFind(stoi(token)));
				}
					tmp1 = 5;
			}

		}
		if (tmp1 != 0) {
			catasterAreas_NA->tryFind(nameCatasterArea)->getCitizens()->insert(citizen->getIdNumber(), citizen);
			citizens->insert(citizen->getIdNumber(), citizen);
		}
	}

	f.close();
}

void MainSystem::exportData()
{
	
	std::ofstream file;
	file.open("CIT.csv");
	int pom = 0;
	BSTIterator<std::string, Citizen> it(citizens->getRoot());
	while (it.existNext()) {
		Citizen * cit = it.current();
		pom++;
		std::string menopriezvisko = cit->getNameLastName();
		std::string bornNumber = cit->getIdNumber();
		std::string dateOfborn = std::to_string(cit->getDateOfBorn().tm_mday) + std::to_string(cit->getDateOfBorn().tm_mon) + std::to_string(cit->getDateOfBorn().tm_year);
		std::string catasterName = cit->getCatasterAreaName();
		std::string stayproperty = std::to_string(cit->getStayProperty()->getId());
		std::string propertyLists = "";
		for (int i = 0; i < cit->getOwnPropertyLists()->size(); i++) {
			propertyLists = propertyLists + ";" + std::to_string(cit->getOwnPropertyLists()->at(i)->getPropertyListNumber());
		}
		if (cit->getOwnPropertyLists()->size() > 0) {
			if (it.existNext()) {
				file << menopriezvisko + ";" + bornNumber + ";" + dateOfborn + ";" + catasterName + ";" + stayproperty + propertyLists + "\n";
			}
			else {

				file << menopriezvisko + ";" + bornNumber + ";" + dateOfborn + ";" + catasterName + ";" + stayproperty + propertyLists;
			}
		}
		else {
			if (it.existNext()) {
				file << menopriezvisko + ";" + bornNumber + ";" + dateOfborn + ";" + catasterName + ";" + stayproperty + "\n";
			}
			else {

				file << menopriezvisko + ";" + bornNumber + ";" + dateOfborn + ";" + catasterName + ";" + stayproperty;
			}
		}
	}

	file.close();
}

void MainSystem::exportData2()
{
	std::ofstream file;
	file.open("LV.csv");
	int pom = 0;
	BSTIterator<int, PropertyList> it0(propertyLists->getRoot());
	while (it0.existNext()) {
		PropertyList * cit = it0.current();
		pom++;
		std::string catasterAreaName = cit->getNameOfCA();
		std::string propertyListId = std::to_string(cit->getPropertyListNumber());
		std::string counProperties = std::to_string(cit->getNumberProperties());
		std::string properties = "";
		std::string parts = "";

		BSTIterator<int, Property> it(cit->getPropertiesInPropertyList()->getRoot());
		while (it.existNext()) {
			Property * prop = it.current();
			properties = properties + ";" + std::to_string(prop->getId());
		}
		BSTIterator<std::string, Part> it2(cit->getParts()->getRoot());
		while (it2.existNext()) {
			Part * part1 = it2.current();
			parts = parts + ";" + part1->getOwner() + ";" + std::to_string(part1->getPart());
		}

		if (cit->getParts() > 0) {
			if (it0.existNext()) {
				file << catasterAreaName + ";" + propertyListId + ";" + counProperties + properties + parts + "\n";
			}
			else {

				file << catasterAreaName + ";" + propertyListId + ";" + counProperties + properties + parts;
			}
		}
		else {
			if (it0.existNext()) {
				file << catasterAreaName + ";" + propertyListId + ";" + counProperties + properties + "\n";
			}
			else {

				file << catasterAreaName + ";" + propertyListId + ";" + counProperties + properties;
			}
		}
	}

	file.close();
}

void MainSystem::exportData3()
{
	std::ofstream file;
	file.open("KUNEH.csv");
	int pom = 0;
	BSTIterator<std::string, CatasterArea> it0(catasterAreas_NA->getRoot());
	while (it0.existNext()) {
		CatasterArea * cA = it0.current();
		pom++;
		std::string catasterAreaName = cA->getCatasterName();
		std::string catasterAreaNumber = std::to_string(cA->getCatasterNumber());
		std::string properties = "";

		BSTIterator<int, Property> it(cA->getPropetries()->getRoot());
		bool ok = false;
		while (it.existNext()) {
			ok = true;
			Property * prop = it.current();
			properties = properties + ";" + std::to_string(prop->getId()) + ";" + prop->getAdress() + ";" + prop->getDescription() + ";" + std::to_string(prop->getPropertyListNumber());
		}

		if (ok == true) {
			if (it0.existNext()) {
				file << catasterAreaName + ";" + catasterAreaNumber + properties + "\n";
			}
			else {

				file << catasterAreaName + ";" + catasterAreaNumber + properties;
			}
		}
		else {
			if (it0.existNext()) {
				file << catasterAreaName + ";" + catasterAreaNumber + "\n";
			}
			else {

				file << catasterAreaName + ";" + catasterAreaNumber;
			}
		}
	}

	file.close();
}

std::string MainSystem::randomStringGenerator(int size)
{
	std::string str = "";
	str.resize(size);
	for (int i = 0; i < size; i++) {
		str[i] = rand() % 26 + 65;
	}
	return str;
}

std::string MainSystem::randomNumberGenerator(int size)
{
	std::string str = "";
	str.resize(size);
	for (int i = 0; i < size; i++) {
		str[i] = rand() % 9 + 49;
	}
	return str;
}

bool MainSystem::generateData(int caNumber, int propertyNumber, int plNumber, int citizenNumber)
{
	std::vector<CatasterArea*> *cAreas = new std::vector<CatasterArea*>;
	
	std::vector<Citizen*> *citizenss = new std::vector<Citizen*>;
//	std::vector<CatasterArea> *cAreas = new std::vector<CatasterArea>;

	for (int i = 0; i < caNumber; i++) {
		std::vector<Property*> *properties = new std::vector<Property*>;

		std::string nameCa = randomStringGenerator(10);
		int caNumber1 = rand();
		CatasterArea * ca = new CatasterArea(caNumber1, nameCa);
		int plSUm = plNumber / caNumber;
		int a = propertyNumber / caNumber;
		int citSum = citizenNumber / caNumber;
		for (int j = 0; j < a; j++) {
			int idNumber = rand();
			std::string adress = randomStringGenerator(15);
			std::string description= randomStringGenerator(15);
			int propertyListNumber = 0;

			Property *prop = new Property(idNumber, adress, description);

			ca->getPropetries()->insert(idNumber, prop);
			properties->push_back(prop);

		}

		for (int c = 0; c < citSum; c++) {
			std::string	nameLastName = randomStringGenerator(8) + " " + randomStringGenerator(10);
			std::string idNumber = randomNumberGenerator(6) + "/" + randomNumberGenerator(4);
			tm dateOfBorn;
			std::string day = idNumber.substr(0, 2);
			std::string mounth = idNumber.substr(2, 2);
			std::string year = idNumber.substr(4, 4);

			dateOfBorn.tm_mday = stoi(day);
			dateOfBorn.tm_mon = stoi(mounth);
			dateOfBorn.tm_year = stoi(year);

			std::string caName = nameCa;

			int randProp = rand() % ((properties->size() -1)- 0 + 1) + 0;
			
			Property * stayProperty = properties->at(randProp);

			Citizen *cit = new Citizen(nameLastName, idNumber, dateOfBorn, stayProperty);
			cit->setCatasterAreaName(caName);

			citizens->insert(cit->getIdNumber(), cit);
			ca->getCitizens()->insert(cit->getIdNumber(), cit);
			citizenss->push_back(cit);
		}


		int sumPL = properties->size() / plSUm;
		for (int k = 0; k < plSUm; k++) {
			
			std::string nameCatasterArea = nameCa;
			int propertyListNumber = rand();
			PropertyList *pList = new PropertyList(nameCatasterArea, propertyListNumber);
			pList->setNumberProperties(sumPL);

			
			int partsNumber = (rand() % 11) + 1;
			double part = (double)1 / (double)partsNumber;
			Part * p;
			int citizenAt = 0;
			for (int d = 0; d < partsNumber; d++) {
				citizenAt = rand() % ((citizenss->size() - 1) - 0 + 1) + 0;
				p = new Part(citizenss->at(citizenAt)->getIdNumber(),part);
				pList->getParts()->insert(p->getOwner(),p);
			}

			for (int b = 0; b < sumPL; b++) {
				if (properties->size() != 0) {
					Property *pr = properties->at(0);
					pr->setPropertyList(propertyListNumber);
					pList->getPropertiesInPropertyList()->insert(pr->getId(), pr);
					properties->erase(properties->begin() + 0);
				}
			}

			ca->getPropetyLists()->insert(pList->getPropertyListNumber(), pList);
			propertyLists->insert(pList->getPropertyListNumber(), pList);
		}

		catasterAreas_NA->insert(nameCa, ca);
		catasterAreas_NU->insert(caNumber1, ca);
		cAreas->push_back(ca);


		
	}


	return true;
}

bool MainSystem::AddNewCatasterArea(int number, std::string name)
{
	CatasterArea *newCa = new CatasterArea(number, name);
	if (catasterAreas_NA->insert(newCa->getCatasterName(), newCa) != false) {
		catasterAreas_NU->insert(newCa->getCatasterNumber(), newCa);
		return true;
	}
	else {
		return false;
	}
}

bool MainSystem::addNewPropertyList(std::string CAname, int numberOfPL)
{
	if (catasterAreas_NA->tryFind(CAname) != nullptr) {
		if (catasterAreas_NA->tryFind(CAname)->getPropetyLists()->tryFind(numberOfPL) == nullptr) {
			PropertyList *newPropertyList = new PropertyList(CAname,numberOfPL);
			catasterAreas_NA->tryFind(CAname)->getPropetyLists()->insert(numberOfPL, newPropertyList);
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::addNewCitizen(std::string name, std::string bornNumber, tm dateOfBorn, Property * stayProperty, std::string nameOfCA, std::string propertyNumber)
{
	Citizen *newCitizen = new Citizen(name, bornNumber, dateOfBorn, stayProperty);
	newCitizen->setCatasterAreaName(nameOfCA);
		if (catasterAreas_NA->tryFind(nameOfCA)->getCitizens()->insert(newCitizen->getIdNumber(), newCitizen) == true) {			
				if (citizens->insert(newCitizen->getIdNumber(), newCitizen) == true) {

					return true;
				}
				else {
					return false;
				}
			
		}
		else {
			return false;
		}
}

		
	



bool MainSystem::addPropertyToPL(int numberCA, int numberOfPL, int propertyNumber)
{
	if (catasterAreas_NU->tryFind(numberCA) != nullptr) {
		if (catasterAreas_NU->tryFind(numberCA)->getPropetyLists()->tryFind(numberOfPL) != nullptr) {			
				Property *prop = catasterAreas_NU->tryFind(numberCA)->getPropetries()->tryFind(propertyNumber);
				if (prop->getPropertyListNumber() == 0) {
					if (catasterAreas_NU->tryFind(numberCA)->getPropetyLists()->tryFind(numberOfPL)->getPropertiesInPropertyList()->insert(prop->getId(), prop) == true) {
						prop->setPropertyList(prop->getPropertyListNumber());
						return true;
					}
					else {
						return false;
					}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}

}

bool MainSystem::addPart(int numberCA, int numberOfPL, std::string bornNumber, double part)
{
	CatasterArea * ca = catasterAreas_NU->tryFind(numberCA);
	if (ca != nullptr) {
		PropertyList *pl = ca->getPropetyLists()->tryFind(numberOfPL);
		if (pl != nullptr) {
			Part *part1 = pl->getParts()->tryFind(bornNumber);
			if (part1 == nullptr) {
				
				std::vector<Part*> *vector = catasterAreas_NU->tryFind(numberCA)->getPropetyLists()->tryFind(numberOfPL)->getParts()->inOrder3();
				BSTIterator<std::string, Part> it(pl->getParts()->getRoot());
				while (it.existNext()) {
					Part *currPart = it.current();
					currPart->setPart(currPart->getPart() - (part / vector->size()));
				}
				Part *newPart = new Part(bornNumber, part);
				pl->getParts()->insert(bornNumber, newPart);
				catasterAreas_NU->tryFind(numberCA)->getCitizens()->tryFind(bornNumber)->getOwnPropertyLists()->push_back(catasterAreas_NU->tryFind(numberCA)->getPropetyLists()->tryFind(numberOfPL));
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
	
}

bool MainSystem::removePropertyFromPL(int propertyNumber, int numberOfPL, int numberCA)
{
	CatasterArea * catArea = catasterAreas_NU->tryFind(numberCA);
	if (catArea != nullptr) {
		PropertyList * propList = catArea->getPropetyLists()->tryFind(numberOfPL);
		if (propList != nullptr) {
			Property * prop = propList->getPropertiesInPropertyList()->tryFind(propertyNumber);
			if (prop != nullptr) {
				if (propList->getPropertiesInPropertyList()->remove(propertyNumber) == true) {
					prop->setPropertyList(0);
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::removePropertyList(int numberOfPL, int numberCA, int newPropList)
{
	CatasterArea * catArea = catasterAreas_NU->tryFind(numberCA);
	if (catArea != nullptr) {
		PropertyList * propList = catArea->getPropetyLists()->tryFind(numberOfPL);
		if (propList != nullptr) {
			PropertyList * newPropList1 = catArea->getPropetyLists()->tryFind(newPropList);
			if (newPropList1 != nullptr) {

				BSTIterator<int, Property> it(propList->getPropertiesInPropertyList()->getRoot());
				while (it.existNext()) {
					Property *currProp = it.current();
					currProp->setPropertyList(newPropList1->getPropertyListNumber());
					newPropList1->getPropertiesInPropertyList()->insert(currProp->getId(), currProp);
					propList->getPropertiesInPropertyList()->remove(currProp->getId());
				}

				BSTIterator<std::string, Part> it2(propList->getParts()->getRoot());
				while (it2.existNext()) {
					Part *currPart = it2.current();
					newPropList1->getParts()->insert(currPart->getOwner(), currPart);
					propList->getParts()->remove(currPart->getOwner());
				}
				calculateParts(newPropList1->getParts());

				if (catArea->getPropetyLists()->remove(numberOfPL) == true) {
					return true;
				}
				else {
					return false;
				}
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::removePart(std::string pBornNumber, int numberOfPL, int numberCA)
{
	CatasterArea *ca = catasterAreas_NU->tryFind(numberCA);
	if (ca != nullptr) {
		PropertyList *propL = ca->getPropetyLists()->tryFind(numberOfPL);
		if (propL != nullptr) {
			if (propL->getParts()->remove(pBornNumber) == true) {
				this->calculateParts(propL->getParts());
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::ownerChange(std::string pBornNumber, std::string pNewBornNumber, int propertyNunber, int numberCA)
{
	CatasterArea *ca = catasterAreas_NU->tryFind(numberCA);
	if (ca != nullptr) {
		Property *pr = ca->getPropetries()->tryFind(propertyNunber);
		if (pr != nullptr) {
			int numberPL = pr->getPropertyListNumber();
			PropertyList *pList = ca->getPropetyLists()->tryFind(numberPL);
			if (pList != nullptr) {
				Part * part = pList->getParts()->tryFind(pBornNumber);
				if (part != nullptr) {
					Citizen *newCit = citizens->tryFind(pNewBornNumber);
					if (newCit != nullptr) {
						Part * newPart = pList->getParts()->tryFind(pBornNumber);
						newPart->setOwner(pNewBornNumber);
						pList->getParts()->remove(pBornNumber);
						pList->getParts()->insert(newPart->getOwner(), newPart);
						newCit->getOwnPropertyLists()->push_back(pList);
						std::vector<PropertyList*> *lists = citizens->tryFind(pBornNumber)->getOwnPropertyLists();
						for (int i = 0; i < lists->size(); i++) {
							if (lists->at(i)->getPropertyListNumber() == numberPL) {
								lists->erase(lists->begin() + i);
							}

						}
						return true;
					}
					else {
						return false;
					}
				}
				else {
					return false;
				}

			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::stayPropertyChange(std::string bornNumber, int propertynumber, std::string cAName)
{
	CatasterArea * ca = catasterAreas_NA->tryFind(cAName);
	if (ca != nullptr) {
		Property * prop = ca->getPropetries()->tryFind(propertynumber);
		if (prop != nullptr) {
			Citizen *cit = citizens->tryFind(bornNumber);
			if (cit != nullptr && prop != cit->getStayProperty()) {
				cit->setStayProperty(prop);
				return true;
			}
			else {
				return false;
			}
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

bool MainSystem::deleteCatasterArea(int deleteCaNumber, int newCaNumber)
{
	CatasterArea * delCa = catasterAreas_NU->tryFind(deleteCaNumber);
	if (delCa != nullptr) {
		CatasterArea * newCa = catasterAreas_NU->tryFind(newCaNumber);
		if (newCa != nullptr) {
			BSTIterator<std::string, Citizen> it(delCa->getCitizens()->getRoot());
			while (it.existNext()) {
				Citizen * curCitizen = it.current();
				newCa->getCitizens()->insert(curCitizen->getIdNumber(), curCitizen);
				delCa->getCitizens()->remove(curCitizen->getIdNumber());
			}
			BSTIterator<int, PropertyList> it1(delCa->getPropetyLists()->getRoot());
			while (it1.existNext()) {
				PropertyList * curPL = it1.current();
				newCa->getPropetyLists()->insert(curPL->getPropertyListNumber(), curPL);
				delCa->getPropetyLists()->remove(curPL->getPropertyListNumber());
			}

			BSTIterator<int, Property> it2(delCa->getPropetries()->getRoot());
			while (it2.existNext()) {
				Property * curP = it2.current();
				int propNumber = curP->getId();
				bool added = false;
				while (added == false) {
					if (newCa->getPropetries()->insert(propNumber, curP) == false) {
						propNumber++;
					}
					else {
						added = true;
					}
				}
				delCa->getPropetries()->remove(curP->getId());
			}

			catasterAreas_NU->remove(delCa->getCatasterNumber());
			catasterAreas_NA->remove(delCa->getCatasterName());
			return true;
		}
		else {
			return false;
		}
	}
	else {
		return false;
	}
}

void MainSystem::calculateParts(SplayTree<std::string, Part>* parts)
{
	std::vector<Part*> *partss = parts->inOrder3();
	int size = partss->size();
	double newParts = (double(1)/double(size));
	BSTIterator<std::string, Part> it(parts->getRoot());
	while (it.existNext()) {
		Part * curP = it.current();
		curP->setPart(newParts);
	}
}

Citizen * MainSystem::findCitizen(std::string bornNumber)
{
	if (citizens->tryFind(bornNumber) != nullptr) {
		return citizens->tryFind(bornNumber);
	}
	else {
		return nullptr;
	}
}

Property * MainSystem::findProperty(std::string catasterName, int propertyNumber)
{
	CatasterArea *catasterArea = catasterAreas_NA->tryFind(catasterName);	
	if (catasterArea != nullptr) {
		Property * property = catasterArea->getPropetries()->tryFind(propertyNumber);
		if (property != nullptr) {
			return property;
		}
		else {
			return nullptr;
		}
	}
	else {
		return nullptr;
	}
}

Property * MainSystem::findPropertyCaNumber(int catasterNumber, int propertyNumber)
{
	CatasterArea *catasterArea = catasterAreas_NU->tryFind(catasterNumber);
	if (catasterArea != nullptr) {
		Property * property = catasterArea->getPropetries()->tryFind(propertyNumber);
		if (property != nullptr) {
			return property;
		}
		else {
			return nullptr;
		}
	}
	else {
		return nullptr;
	}
}

Property * MainSystem::findPropertyCaNumber2(int catasterNumber, int propertyListNumber, int propertyNumber)
{
	CatasterArea *catasterArea = catasterAreas_NU->tryFind(catasterNumber);
	if (catasterArea != nullptr) {
		PropertyList *prList = catasterArea->getPropetyLists()->tryFind(propertyListNumber);
		if (prList != nullptr) {
			Property * property = prList->getPropertiesInPropertyList()->tryFind(propertyNumber);
			if (property != nullptr) {
				return property;
			}
			else {
				return nullptr;
			}
		}
		else {
			return nullptr;
		}
	}
	else {
		return nullptr;
	}
}

PropertyList * MainSystem::findPropertyList(std::string catasterName, int propertyListNumber)
{
	CatasterArea *catasterArea = catasterAreas_NA->tryFind(catasterName);
	if (catasterArea != nullptr) {
		PropertyList * prList = catasterArea->getPropetyLists()->tryFind(propertyListNumber);
		if (prList != nullptr) {
			return prList;
		}
		else {
			return nullptr;
		}
	}
	else {
		return nullptr;
	}
}

PropertyList * MainSystem::findPropertyListCaNumber(int catasterNumber, int propertyListNumber)
{
	CatasterArea *catasterArea = catasterAreas_NU->tryFind(catasterNumber);
	if (catasterArea != nullptr) {
		PropertyList * prList = catasterArea->getPropetyLists()->tryFind(propertyListNumber);
		if (prList != nullptr) {
			return prList;
		}
		else {
			return nullptr;
		}
	}
	else {
		return nullptr;
	}
}

MainSystem::MainSystem()
{
	catasterAreas_NA = new SplayTree<std::string, CatasterArea>;
	catasterAreas_NU = new SplayTree<int, CatasterArea>;
	citizens = new SplayTree<std::string, Citizen>;
	propertyLists = new SplayTree<int, PropertyList>;
}