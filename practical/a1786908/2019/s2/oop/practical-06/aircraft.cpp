#include "person.h"
#include "aircraft.h"
#include <iostream>
#include <string>

aircraft::aircraft(std::string callsign,person thePilot,person theCoPilot)
{
	name = callsign;
	pilot = thePilot;
	coPilot = theCoPilot;
}

void aircraft::setPilot(person thePilot)
{
	pilot = thePilot;
}

person aircraft::getPilot()
{
	return pilot;
}

void aircraft::setCoPilot(person theCoPilot)
{
	coPilot = theCoPilot;
}

person aircraft::getCoPilot()
{
	return coPilot;
}

void aircraft::printDetails()
{
	std::cout << name << std::endl << pilot.getName() << std::endl << coPilot.getName() << std::endl;
}

