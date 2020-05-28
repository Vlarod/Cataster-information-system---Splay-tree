#include "Part.h"



void Part::setOwner(std::string newOwner)
{
	owner = newOwner;
}

void Part::setPart(double newPart)
{
	part = newPart;
}

double Part::getPart()
{
	return part;
}

std::string Part::getOwner()
{
	return owner;
}

Part::Part()
{
}

Part::Part(std::string powner, double ppart):owner(powner), part(ppart)
{
}
