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
int Flight::get_Flight_Number(int flight_num){
	return flight_num;
}
string Flight::get_Plane_Type(string plane_type){
	return plane_type;
}
string Flight::get_Departing_Airport(string departing_airport){
	return departing_airport;
}
string Flight::get_Arriving_Airport(string arriving_airport){
	return arriving_airport;
}
int Flight::get_Departure_Time(int departure_time){
	return departure_time;
}
int Flight::get_Arrival_Time(int arrival_time){
	return arrival_time; 
}

