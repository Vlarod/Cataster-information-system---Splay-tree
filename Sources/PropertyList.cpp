#include "PropertyList.h"



void PropertyList::setCatasterName(std::string newCN)
{
	nameCatasterArea = newCN;
}

void PropertyList::setPropertyListNumber(int newNumber)
{
	propertyListNumber = newNumber;
}

void PropertyList::setNumberProperties(int newNumberPr)
{
	numberProperties = newNumberPr;
}

int PropertyList::getNumberProperties()
{
	return numberProperties;
}

std::string PropertyList::getNameOfCA()
{
	return nameCatasterArea;
}

int PropertyList::getPropertyListNumber()
{
	return propertyListNumber;
}

SplayTree<std::string, Part>* PropertyList::getParts()
{
	return parts;
}

SplayTree<int, Property>* PropertyList::getPropertiesInPropertyList()
{
	return propertiesInPropertyList;
}

PropertyList::PropertyList()
{
	propertiesInPropertyList = new SplayTree<int, Property>;
	parts = new SplayTree<std::string, Part>;
}

PropertyList::PropertyList(std::string pnameCatasterArea, int ppropertyListNumber):nameCatasterArea(pnameCatasterArea), propertyListNumber(ppropertyListNumber)
{
	propertiesInPropertyList = new SplayTree<int, Property>;
	parts = new SplayTree<std::string, Part>;
}
