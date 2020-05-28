#include "Property.h"


void Property::setIdNumber(int newId)
{
	idNumber = newId;
}

void Property::setAdress(std::string newAdress)
{
	adress = newAdress;
}

void Property::setDescription(std::string newDescription)
{
	description = newDescription;
}

void Property::setPropertyList(int newVal)
{
	propertyListNumber = newVal;
}

int Property::getId()
{
	return idNumber;
}

std::string Property::getAdress()
{
	return adress;
}

std::string Property::getDescription()
{
	return description;
}

int Property::getPropertyListNumber()
{
	return propertyListNumber;
}

Property::Property(int number, std::string adres, std::string descr):idNumber(number), adress(adres), description(descr)
{
	propertyListNumber = 0;
}

Property::Property()
{
	propertyListNumber = 0;
}
