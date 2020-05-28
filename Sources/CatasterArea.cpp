#include "CatasterArea.h"


void CatasterArea::setCatasterNumber(int newNumber)
{
	catasterNumber = newNumber;
}

void CatasterArea::setCatasterName(std::string newName)
{
	catasterName = newName;
}

SplayTree<int, Property>* CatasterArea::getPropetries()
{
	return propetries;
}

SplayTree<int, PropertyList>* CatasterArea::getPropetyLists()
{
	return propetyLists;
}

SplayTree<std::string, Citizen>* CatasterArea::getCitizens()
{
	return citizens;
}

int CatasterArea::getCatasterNumber()
{
	return catasterNumber;
}

std::string CatasterArea::getCatasterName()
{
	return catasterName;
}

CatasterArea::CatasterArea(int number, std::string name):catasterName(name), catasterNumber(number)
{
	propetries = new SplayTree<int, Property>;
	propetyLists = new SplayTree<int, PropertyList>;
	citizens = new SplayTree<std::string, Citizen>;
}

CatasterArea::CatasterArea()
{
	propetries = new SplayTree<int, Property>;
	propetyLists = new SplayTree<int, PropertyList>;
	citizens = new SplayTree<std::string, Citizen>;

}
