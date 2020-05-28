#pragma once
#include "Property.h"
#include "PropertyList.h"

#include <string>
#include <time.h>

#include <vector>
class Citizen
{
private:
	std::string	nameLastName;
	std::string idNumber;
	tm dateOfBorn;
	std::string catasterAreaName;
	Property * stayProperty;

	std::vector<PropertyList*> *ownPropertyLists;
public:
	void setNameLastName(std::string newNameLastName);
	void setIdNumber(std::string newId);
	void setDateOfBird(tm newDateOB);
	void setCatasterAreaName(std::string newName);
	void setStayProperty(Property *newProperty);

	std::string getCatasterAreaName();
	std::string getNameLastName();
	tm getDateOfBorn();
	Property *getStayProperty();
	std::vector<PropertyList*> *getOwnPropertyLists();
	std::string getIdNumber();
	Citizen();
	Citizen(std::string	pnameLastName, std::string pidNumber, tm pdateOfBorn, Property * pstayProperty);
	
};

