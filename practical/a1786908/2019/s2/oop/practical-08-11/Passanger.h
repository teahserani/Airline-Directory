#ifndef PASSANGER_H
#define PASSANGER_H

#include "Flight.h"

using namespace std; 

#include <string>

class Passanger : public Flight{

	public:
	string last_name;
	string first_name;
	int resv_num();
	string seat_num;

	Passanger();
	Passanger(string last_name);
	string get_Passanger_First_Name();
	string get_Passager_Last_Name();
	string get_Seat_Num();
	int get_Reveration_Number();
	string get_Seat_Number(); 
	~Passanger();

};
#endif
