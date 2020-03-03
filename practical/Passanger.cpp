
#include "Passanger.h"
#include "Flight.h"
#include  <string>
#include <functional>
#include <algorithm>
using namespace std; 


Passanger::Passanger(): Flight(){
	string last_name="NULL";
	string first_name="NULL";
	int resv_num=0;
	string seat_num="NULL";
}
Passanger::Passanger(string last_name){
	this->last_name=last_name;
}
string Passanger::get_Passanger_First_Name(string first_name){
	return first_name;
}
string Passanger::get_Passanger_Last_Name(string last_name){
	return last_name;
}
int Passanger::get_Reveration_Number(int resv_num){
	return resv_num;
}
int Passanger::get_Airport_Arrival_Time(int departure_time){
	int airport_arrival_time;
	airport_arrival_time= departure_time-200;
	return airport_arrival_time;
}
string Passanger::get_Seat_Number(string seat_num){
	return seat_num;
}


