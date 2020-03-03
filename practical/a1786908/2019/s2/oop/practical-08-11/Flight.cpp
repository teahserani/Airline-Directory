#include <iostream>
#include"Flight.h"

using namespace std; 
#include <string>

Flight::Flight(){
	int flight_num=0;
	string plane_type="NULL";
	string departing_airport="???";
	string arriving_airport="???";
	int departure_time=0;
	int arrival_time=0;
}
Flight::Flight(int flight_num){ 
	this-> flight_num=flight_num;
}
string Flight::get_Plane_Type(){
	return plane_type;
}
string Flight::get_Departing_Airport(){
	return departing_airport;
}
string Flight::get_Arriving_Airport(){
	return arriving_airport;
}
int Flight::get_Departure_Time(){
	return departure_time;
}
int Flight::get_Arrival_Time(){
	return arrival_time; 
}

