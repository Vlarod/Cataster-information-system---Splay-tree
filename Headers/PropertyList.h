#pragma once
//#include "CatasterArea.h"
#include "Property.h"
#include "SplayTree.h"
#include "Part.h"
#include <vector>

class PropertyList
{
private:
	std::string nameCatasterArea;
	int propertyListNumber;
	//TODO valstnici vsetci
	int numberProperties;
	SplayTree<int, Property> *propertiesInPropertyList;
	SplayTree<std::string, Part> *parts;

	//std::vector<Part> *parts;
public:
	void setCatasterName(std::string newCN);
	void setPropertyListNumber(int newNumber);
	void setNumberProperties(int newNumberPr);

	int getNumberProperties();
	std::string getNameOfCA();
	int getPropertyListNumber();
	SplayTree<std::string, Part> *getParts();
	SplayTree<int, Property> *getPropertiesInPropertyList();

	PropertyList();
	PropertyList(std::string pnameCatasterArea, int ppropertyListNumber);
};

