
#include "Flight.h"
#include "Passanger.h"
#include <iostream>
#include <string>

int main(){
	int num_of_reversations=5;
	Passanger *passanger[num_of_reversations];

	Passanger  passanger1= Passanger("Smith");
	Passanger  passanger2= Passanger("Johnson");
	Passanger  passanger3= Passanger("Jackson");
	Passanger  passanger4= Passanger("Collins");
	Passanger  passanger5= Passanger("Fallon");

	passanger[0]=&passanger1;
	passanger[1]=&passanger2;
	passanger[2]=&passanger3;
	passanger[3]=&passanger4;
	passanger[4]=&passanger5;

	string first_names [5];
	first_names[0]="John";
	first_names[1]="Nick";
	first_names[2]="Mary";
	first_names[3]="Sue";
	first_names[4]="Sarah";

	string last_names[5];
	last_names[0]="Smith";
	last_names[1]="Johnson";
	last_names[2]="Jackson";
	last_names[3]="Collins";
	last_names[4]="Fallon";

	string seat_numbers [5];
	seat_numbers[0]= "A1";
	seat_numbers[1]= "B1";
	seat_numbers[2]= "C1";
	seat_numbers[3]= "D1";
	seat_numbers[4]= "A2";

	int reversations_numbers[num_of_reversations];
	int count=1111;
	for(int i=0; i<num_of_reversations; i++){
		reversations_numbers[i]=count;
		count++;
	}

	int flight_numbers [5];
	flight_numbers[0]=785;
	flight_numbers[1]=891;
	flight_numbers[2]=991;
	flight_numbers[3]=891;
	flight_numbers[4]=991;

	string plane_types [5];
	plane_types[0]="Airbus A380";
	plane_types[1]="Boeing 747";
	plane_types[2]="Airbus 800";
	plane_types[3]="Airbus 800";
	plane_types[4]="Boeing 747";

	string departing_airports [5];
	departing_airports[0]="BOS";
	departing_airports[1]="ADL";
	departing_airports[2]="BER";
	departing_airports[3]="BER";
	departing_airports[4]="ADL";

	string arriving_airports [5];
	arriving_airports[0]="DCA";
	arriving_airports[1]="ZAD";
	arriving_airports[2]="JBD";
	arriving_airports[3]="JBD";
	arriving_airports[4]="ZAD";

	int departure_times [5];
	departure_times[0]= 1822;
	departure_times[1]= 1245;
	departure_times[2]= 1325;
	departure_times[3]= 1325;
	departure_times[4]= 1245;

	int arrival_times [5];
	arrival_times[0]=2213;
	arrival_times[1]=1434;
	arrival_times[2]=1634;
	arrival_times[3]=1634;
	arrival_times[4]=1434;

	cout<<"Passanger Information:"<<endl;
	cout<<""<<endl;

	for(int i=0;i<5; i++){
		cout<<"Passanger's Name: ";
		string first_name=first_names[i];
		string last_name=last_names[i];
		cout<<passanger[i]->get_Passanger_First_Name(first_name);
		cout<<" "<<passanger[i]->get_Passanger_Last_Name(last_name)<<endl;

		int reveration_number=reversations_numbers[i];
		cout<<"Reservation Number: ";
		cout<<passanger[i]->get_Reveration_Number(reveration_number)<<endl;

		int flight_number=flight_numbers[i];
		cout<<"Flight: ";
		cout<<passanger[i]->get_Flight_Number(flight_number)<<endl;

		string plane_type=plane_types[i];
		cout<<"Plane Type: ";
		cout<<passanger[i]->get_Plane_Type(plane_type)<<endl;

		string departing_airport=departing_airports[i];
		cout<<"Flight Departs from "<<passanger[i]->get_Departing_Airport(departing_airport)<<endl;

		string arriving_airport=arriving_airports[i];
		cout<<"Flight Arriving in "<<passanger[i]->get_Arriving_Airport(arriving_airport)<<endl;

		int departure_time=departure_times[i];
		cout<<"Expected Departure Time: ";
		cout<<passanger[i]->get_Departure_Time(departure_time)<<endl;

		int arrival_time=arrival_times[i];
		cout<<"Expected Arrival Time: ";
		cout<<passanger[i]->get_Arrival_Time(arrival_time)<<endl;
		cout<<""<<endl;
	}
	return 0;
}
