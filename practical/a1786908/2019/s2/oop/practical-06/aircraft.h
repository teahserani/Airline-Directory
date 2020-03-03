#ifdef AIRCRAFT_H
#define AIRCRAFT_H

#include<string>
#include "person.h"
class aircraft()
{
	static int count;
	int id;
	std::string callsign, pilot, copilot;
	
	public:
		aircraft(std::string callsign, person thePilot, person theCoPilot);
		void setPilot(person thePilot);
		person getPilot();
		void setCoPilot(person theCoPilot);
//		person getCoPilot(person theCoPilot);
		person getCoPilot();
		void printDetail();
};
#endif
