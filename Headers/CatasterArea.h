#pragma once
#include <string>

#include "SplayTree.h"

#include "Property.h"
#include "PropertyList.h"
#include "Citizen.h"

class CatasterArea
{
private:
	int catasterNumber;
	std::string catasterName;

	SplayTree<int, Property> *propetries;
	SplayTree<int, PropertyList> *propetyLists;
	SplayTree<std::string, Citizen> *citizens;
public:
	void setCatasterNumber(int newNumber);
	void setCatasterName(std::string newName);

	SplayTree<int, Property> *getPropetries();
	SplayTree<int, PropertyList> *getPropetyLists();
	SplayTree<std::string, Citizen> *getCitizens();

	int getCatasterNumber();
	std::string getCatasterName();
	CatasterArea(int number, std::string name);
	CatasterArea();
};

