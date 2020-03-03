#include "Flight.h"
#include "Passanger.h"
#include <iostream>

int main(){
	int departure_time;
	cout<<" Departure Time: ";
	cin>> departure_time;
	int airport_arrival_time= departure_time-200;
	cout<<""<<endl;
	cout<<"Airport Arrival Time: "<<airport_arrival_time<<endl;
	return 0;
}
