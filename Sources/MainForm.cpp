#include "MainForm.h"

void AUS2___SemUdaj::MyForm::printCatasterAreas()
{
	BSTIterator<std::string, CatasterArea> it(mainSystem->getCatasterAreas_NA()->getRoot());
	while (it.existNext()) {
		CatasterArea *currCa = it.current();

		ListViewItem^ item = gcnew ListViewItem();

		std::string name = currCa->getCatasterName();
		item->Text = gcnew String(name.c_str());
		item->SubItems->Add("");


		int number = currCa->getCatasterNumber();
		item->SubItems[1]->Text = gcnew String(std::to_string(number).c_str());
		item->SubItems->Add("");

		listViewKU->Items->Add(item);
	}
		
}

void AUS2___SemUdaj::MyForm::printProperties_CA_NA()
{
	CatasterArea *ca;
	std::string findCA = msclr::interop::marshal_as<std::string>(textBoxCatasterArea_NA->Text);
	if (mainSystem->getCatasterAreas_NA()->tryFind(findCA) != nullptr) {
		listViewProperties->Show();
		labelProperties->Show();

		CatasterArea *ca = mainSystem->getCatasterAreas_NA()->tryFind(findCA);

		BSTIterator<int, Property> it(ca->getPropetries()->getRoot());
		while (it.existNext()) {	
			Property *currProp = it.current();
			ListViewItem^ item = gcnew ListViewItem();

			int id = currProp->getId();
			item->Text = gcnew String(std::to_string(id).c_str());
			item->SubItems->Add("");


			std::string adress = currProp->getAdress();
			item->SubItems[1]->Text = gcnew String(adress.c_str());
			item->SubItems->Add("");

			std::string desc = currProp->getDescription();
			item->SubItems[2]->Text = gcnew String(desc.c_str());
			item->SubItems->Add("");

			listViewProperties->Items->Add(item);
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Zadané katastrálne územie neexistuje.");
	}
	
}

void AUS2___SemUdaj::MyForm::printCitizenProperties()
{
	std::string numberCA = msclr::interop::marshal_as<std::string>(textBoxNumberCA->Text);
	std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxBornNumber->Text);
	CatasterArea *ca = mainSystem->getCatasterAreas_NU()->tryFind(stoi(numberCA));
	std::string cAname = ca->getCatasterName();
	if (ca != nullptr && mainSystem->getCatasterAreas_NU()->tryFind(stoi(numberCA))->getCitizens()->tryFind(bornNumber) != nullptr) {

		for (int i = 0; i < ca->getCitizens()->tryFind(bornNumber)->getOwnPropertyLists()->size(); i++) {
			PropertyList * curPropList = ca->getCitizens()->tryFind(bornNumber)->getOwnPropertyLists()->at(i);
			BSTIterator<int, Property> it(ca->getCitizens()->tryFind(bornNumber)->getOwnPropertyLists()->at(i)->getPropertiesInPropertyList()->getRoot());
			while (it.existNext()) {
				Property *currProp = it.current();
				if (cAname == curPropList->getNameOfCA()) {
					ListViewItem^ item = gcnew ListViewItem();

					int number = currProp->getId();
					item->Text = gcnew String(std::to_string(number).c_str());
					item->SubItems->Add("");


					double partOfPartion = curPropList->getParts()->tryFind(bornNumber)->getPart();
					item->SubItems[1]->Text = gcnew String(std::to_string(partOfPartion).c_str());
					item->SubItems->Add("");

					listViewCitizenProperties->Items->Add(item);
				}
			}
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Zadané katastrálne územie alebo obivate¾ neexistuje.");
	}
}

void AUS2___SemUdaj::MyForm::printAllCitizenProperties()
{
	std::string bornNumber = msclr::interop::marshal_as<std::string>(textBoxAllCitizenPropertiesBornNumber->Text);
	Citizen *cit = mainSystem->getCitizens()->tryFind(bornNumber);
	if (cit != nullptr) {

		for (int i = 0; i < cit->getOwnPropertyLists()->size(); i++) {
			PropertyList * curPropList = cit->getOwnPropertyLists()->at(i);
			BSTIterator<int, Property> it(cit->getOwnPropertyLists()->at(i)->getPropertiesInPropertyList()->getRoot());
			while (it.existNext()) {
				Property *currProp = it.current();
				ListViewItem^ item = gcnew ListViewItem();

				int number = currProp->getId();
				item->Text = gcnew String(std::to_string(number).c_str());
				item->SubItems->Add("");


				double partOfPartion = curPropList->getParts()->tryFind(bornNumber)->getPart();
				item->SubItems[1]->Text = gcnew String(std::to_string(partOfPartion).c_str());
				item->SubItems->Add("");

				listViewCitizenProperties->Items->Add(item);
			}
		}
	}
	else {
		System::Windows::Forms::MessageBox::Show("Zadané katastrálne územie alebo obivate¾ neexistuje.");
	}
}

void AUS2___SemUdaj::MyForm::printCitizens()
{
		std::vector<Citizen> *vector = mainSystem->getCitizens()->inOrder2();
		BSTIterator<std::string, Citizen> it(mainSystem->getCitizens()->getRoot());
		while (it.existNext()) {
			Citizen *currCit = it.current();
			ListViewItem^ item = gcnew ListViewItem();

			std::string name = currCit->getNameLastName();
			item->Text = gcnew String(name.c_str());
			item->SubItems->Add("");

			std::string bornNumber = currCit->getIdNumber();
			item->SubItems[1]->Text = gcnew String(bornNumber.c_str());
			item->SubItems->Add("");

			std::string dateOfBorn = std::to_string(currCit->getDateOfBorn().tm_mday) + ". " + std::to_string(currCit->getDateOfBorn().tm_mon) + ". " + std::to_string(currCit->getDateOfBorn().tm_year);
			item->SubItems[2]->Text = gcnew String(dateOfBorn.c_str());
			item->SubItems->Add("");

			std::string adress;
			if (currCit->getStayProperty() != nullptr) {
				adress = std::to_string(currCit->getStayProperty()->getId()) + " , " + currCit->getStayProperty()->getAdress() + " , " + currCit->getStayProperty()->getDescription();
			}
			else {
				adress = "-";
			}
			item->SubItems[3]->Text = gcnew String(adress.c_str());
			item->SubItems->Add("");
			listViewCitizens->Items->Add(item);
		
	}
}

void AUS2___SemUdaj::MyForm::printStayPropertyCitizens(Property * prop)
{
	listViewCitizens->Items->Clear();
	BSTIterator<std::string, Citizen> it(mainSystem->getCitizens()->getRoot());
	while (it.existNext()) {
		Citizen * curCitizen = it.current();
		if (curCitizen->getStayProperty() == prop) {
			ListViewItem^ item = gcnew ListViewItem();

			std::string name = curCitizen->getNameLastName();
			item->Text = gcnew String(name.c_str());
			item->SubItems->Add("");
		
					std::string bornNumber = curCitizen->getIdNumber();
					item->SubItems[1]->Text = gcnew String(bornNumber.c_str());
					item->SubItems->Add("");

					std::string dateOfBorn = std::to_string(curCitizen->getDateOfBorn().tm_mday) + ". " + std::to_string(curCitizen->getDateOfBorn().tm_mon) + ". " + std::to_string(curCitizen->getDateOfBorn().tm_year);
					item->SubItems[2]->Text = gcnew String(dateOfBorn.c_str());
					item->SubItems->Add("");

					std::string adress;
					if (curCitizen->getStayProperty() != nullptr) {
						adress = std::to_string(curCitizen->getStayProperty()->getId()) + " , " + curCitizen->getStayProperty()->getAdress() + " , " + curCitizen->getStayProperty()->getDescription();
					}
					else {
						adress = "-";
					}
					item->SubItems[3]->Text = gcnew String(adress.c_str());
					item->SubItems->Add("");
					
			listViewCitizens->Items->Add(item);
		}
	}
}

	
