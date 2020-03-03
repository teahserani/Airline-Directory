#include "Flight.h"
#include <iostream>

int main(){
	int flight_number;
	string plane_type;
	string departing_aiport;
        string arriving_airport;
	int departure_time;
	int arrival_time;

	Flight flight(flight_number);

	cout<<"Enter Flight Number ";
	cin>>flight_number;
	cout<<flight_number;
	cout<<""<<endl;
	switch(flight_number){
		case 785:
			plane_type="Airbus A380";
			departing_aiport="BOS";
			arriving_airport="DCA";
			departure_time=1822;
			arrival_time=2213;
		case 891:
			plane_type="Boeing 747";
			departing_aiport="ADL";
			arriving_airport="ZAD";
			departure_time=1245;
			arrival_time=1434;
		case 991:
			plane_type="Airbus 800";
			departing_aiport="BER";
			arriving_airport="JBD";
		        departure_time=1325;
			arrival_time=1634;
	}

	cout<<"Plane Type: ";
	cout<<flight.get_Plane_Type(plane_type)<<endl;
	cout<<"Traveling from ";
	cout<<flight.get_Departing_Airport(departing_aiport);
	cout<<" to ";
	cout<<flight.get_Arriving_Airport(arriving_airport)<<endl;
	cout<<"Departs at: ";
	cout<<flight.get_Departure_Time(departure_time)<<endl;
	cout<<"Arrives at: ";
	cout<<flight.get_Arrival_Time(arrival_time)<<endl;

	return 0;
}
