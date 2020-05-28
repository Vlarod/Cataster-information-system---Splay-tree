#include "Citizen.h"



void Citizen::setNameLastName(std::string newNameLastName)
{
	nameLastName = newNameLastName;
}

void Citizen::setIdNumber(std::string newId)
{
	idNumber = newId;
}

void Citizen::setDateOfBird(tm newDateOB)
{
	dateOfBorn = newDateOB;
}

void Citizen::setCatasterAreaName(std::string newName)
{
	catasterAreaName = newName;
}

void Citizen::setStayProperty(Property * newProperty)
{
	stayProperty = newProperty;
}

std::string Citizen::getCatasterAreaName()
{
	return catasterAreaName;
}

std::string Citizen::getNameLastName()
{
	return nameLastName;
}

tm Citizen::getDateOfBorn()
{
	return dateOfBorn;
}

Property *Citizen::getStayProperty()
{
	return stayProperty;
}

std::vector<PropertyList*>* Citizen::getOwnPropertyLists()
{
	return ownPropertyLists;
}

std::string Citizen::getIdNumber()
{
	return idNumber;
}

Citizen::Citizen()
{
	ownPropertyLists = new std::vector<PropertyList*>;
}

Citizen::Citizen(std::string pnameLastName, std::string pidNumber, tm pdateOfBorn, Property * pstayProperty):nameLastName(pnameLastName),idNumber(pidNumber) ,dateOfBorn(pdateOfBorn), stayProperty(pstayProperty)
{
	ownPropertyLists = new std::vector<PropertyList*>;
}




