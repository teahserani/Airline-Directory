/*
*Provides information about the flight
*Parent class for Passanger
*/
#ifndef FLIGHT_H
#define FLIGHT_H

#include <string>

using namespace std;

class Flight
{
public:
	int flight_num;
	string plane_type;
	string departing_airport;
	string arriving_airport;
	int departure_time;
	int arrival_time;

	Flight();
	Flight(int flight_num);
	string get_Plane_Type();
        string get_Departing_Airport();
	string get_Arriving_Airport();
	int get_Departure_Time();
	int get_Arrival_Time();
	~Flight();
};

#endif
