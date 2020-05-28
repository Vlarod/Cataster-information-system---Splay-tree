#pragma once
#include <string>
class Property
{
private:
	int idNumber;
	std::string adress;
	std::string description;
	int propertyListNumber;
public:
	void setIdNumber(int newId);
	void setAdress(std::string newAdress);
	void setDescription(std::string newDescription);
	void setPropertyList(int newVal);

	int getId();
	std::string getAdress();
	std::string getDescription();
	int getPropertyListNumber();
	Property(int number,std::string adress, std::string descr);
	Property();
};

