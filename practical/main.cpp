#include "Flight.h"
//#include "Passanger.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
	Flight *flight [3];

	Flight flight1 (785);
	Flight flight2 (891);
	Flight flight3 (991);

	int flight_numbers [3];
	flight_numbers[0]= 785;
	flight_numbers[1]=891;
	flight_numbers[2]=991;

	string plane_types [3];
	plane_types[0]="Airbus A380";
	plane_types[1]="Boeing 747";
	plane_types[2]="Airbus 800";

	string departing_airports [3];
	departing_airports[0]="BOS";
	departing_airports[1]="ADL";
	departing_airports[2]="BER";

	string arriving_airports [3];
	arriving_airports[0]="DCA";
	arriving_airports[1]="ZAD";
	arriving_airports[2]="JBD";

	int departure_times [3];
	departure_times[0]= 1822;
	departure_times[1]= 1245;
	departure_times[2]= 1325;

	int arrival_times [3];
	arrival_times[0]=2213;
	arrival_times[1]=1434;
	arrival_times[2]=1634;

	flight[0]=&flight1;
	flight[1]=&flight2;
	flight[2]=&flight3;
	
	cout<<"Schueduled Flights:"<<endl;
	cout<<""<<endl;
	for (int i=0; i<3; i++){
		cout<<" Flight Number: ";

		int flight_number= flight_numbers[i];
		cout<<flight[i]->get_Flight_Number(flight_number)<<endl;

		string plane_type= plane_types[i];
		cout<<"Plane Type: ";
		cout<<flight[i]->get_Plane_Type(plane_type)<<endl;

		string departing_airport= departing_airports[i];
		cout<<"Departing Airport: ";
		cout<<flight[i]->get_Departing_Airport(departing_airport)<<endl;
		
		string arriving_airport=arriving_airports[i];
		cout<<"Arriving Airport: ";
		cout<< flight[i]->get_Arriving_Airport(arriving_airport)<<endl;
		
		int departure_time= departure_times[i];
		cout<<"Schueduled Depature Time: ";
		cout<<flight[i]->get_Departure_Time(departure_time)<<endl;

		int arrival_time= arrival_times[i];
		cout<<"Schueduled Arrival Time: ";
		cout<<flight[i]->get_Arrival_Time(arrival_time)<<endl;
		cout<<""<<endl;
	}
	return 0;
}
