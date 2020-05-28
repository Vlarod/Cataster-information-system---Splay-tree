#pragma once
#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdlib.h>

#include "SplayTree.h"

#include "CatasterArea.h"
#include "Property.h"
#include "Citizen.h"
#include "Part.h"

class MainSystem
{
private:

	SplayTree<int, CatasterArea> *catasterAreas_NU;
	SplayTree<std::string, CatasterArea> *catasterAreas_NA;

	SplayTree<std::string, Citizen> *citizens;
	SplayTree<int, PropertyList> *propertyLists;

public:
	SplayTree<std::string, CatasterArea> *getCatasterAreas_NA();
	SplayTree<int, CatasterArea> *getCatasterAreas_NU();

	SplayTree<std::string, Citizen> *getCitizens();
	void importData();
	void importData2();
	void importData3();
	
	void exportData();
	void exportData2();
	void exportData3();

	std::string randomStringGenerator(int size);
	std::string randomNumberGenerator(int size);

	bool generateData(int caNumber, int propertyNumber, int plNumber, int citizenNumber);

	bool AddNewCatasterArea(int number, std::string name);
	bool addNewPropertyList(std::string CAname, int numberOfPL);
	bool addNewCitizen(std::string name, std::string bornNumber, tm dateOfBorn, Property * stayProperty, std::string nameOfCA, std::string propertyNumber);
	bool addPropertyToPL(int numberCA, int numberOfPL, int propertyNumber);
	bool addPart(int numberCA, int numberOfPL, std::string bornNumber, double part);
	bool removePropertyFromPL(int propertyNumber, int numberOfPL, int numberCA);
	bool removePropertyList(int numberOfPL, int numberCA, int newPropList);
	bool removePart(std::string pBornNumber, int numberOfPL, int numberCA);
	bool ownerChange(std::string pBornNumber, std::string pNewBornNumber, int propertyNunber, int numberCA);
	bool stayPropertyChange(std::string bornNumber, int propertynumber, std::string cAName);
	bool deleteCatasterArea(int deleteCaNumber, int newCaNumber);

	void calculateParts(SplayTree<std::string,Part>* parts);
	Citizen * findCitizen(std::string bornNumber);
	Property * findProperty(std::string catasterName, int propertyNumber);
	Property * findPropertyCaNumber(int catasterNumber, int propertyNumber);
	Property * findPropertyCaNumber2(int catasterNumber, int propertyListNumber,int propertyNumber);
	PropertyList * findPropertyList(std::string catasterName, int propertyListNumber);
	PropertyList * findPropertyListCaNumber(int catasterNumber, int propertyListNumber);
	MainSystem();
};

