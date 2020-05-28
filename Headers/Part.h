#pragma once
#include <string>
class Part
{
private:
	std::string owner;
	double part;
public:
	void setOwner(std::string newOwner);
	void setPart(double newPart);

	double getPart();
	std::string getOwner();
	Part();
	Part(std::string powner, double ppart);
};

