#ifndef PASSANGER_H
#define PASSANGER_H

#include "Flight.h"

using namespace std; 

#include <string>

class Passanger: public Flight {

	public:
	string last_name;
	string first_name;
	int resv_num;
	string seat_num;

	Passanger();
	Passanger(string last_name);
	string get_Passanger_First_Name(string first_name);
	string get_Passanger_Last_Name(string last_name);
	string get_Seat_Number(string seat_num);
	int get_Reveration_Number(int resv_num);
	int get_Airport_Arrival_Time(int departure_time);

};
#endif
