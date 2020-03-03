#include "Flight.h"
#include "Passanger.h"
#include <iostream>

using namespace std;

int main(){

	string last_name;
	Passanger passanger(last_name);

	string first_name;
	string seat_num;
	int resv_num;
	cout<<"Reseveration Number: ";
	cin>>resv_num;
	cout<<" "<<endl;
	int flight_num;
	string plane_type;
	string departing_airport;
        string arriving_airport;
	int departure_time;
	int arrival_time;

	if(resv_num==1111){
			first_name="John";
			last_name="Smith";
			seat_num="A1";
			flight_num=785;
			plane_type="Airbus A380";
			departing_airport="BOS";
			arriving_airport="DCA";
			departure_time=1822;
			arrival_time=2213;
	}
	if(resv_num==1112){
			first_name="Nick";
			last_name="Johnson";
			seat_num="B1";
			flight_num=891;
			plane_type="Boeing 747";
			departing_airport="ADL";
			arriving_airport="ZAD";
			departure_time=1245;
			arrival_time=1434;
	}
	if(resv_num==1113){
			first_name="Mary";
			last_name="Jackson";
			seat_num="C1";
			flight_num=991;
			plane_type="Airbus 800";
			departing_airport="BER";
			arriving_airport="JBD";
		        departure_time=1325;
			arrival_time=1634;
	}
	if(resv_num==1114){
			first_name="Sue";
			last_name="Collins";
			seat_num="D1";
			resv_num=1114;
			flight_num=891;
			plane_type="Airbus 800";
			departing_airport="BER";
			arriving_airport="JBD";
		        departure_time=1325;
			arrival_time=1634;
	}
	if (resv_num==1115){
			first_name="Sarah";
			last_name="Fallon";
			seat_num="A2";
			flight_num=991;
			plane_type="Airbus 800";
			departing_airport="BER";
			arriving_airport="JBD";
		        departure_time=1325;
			arrival_time=1634;
	}
	if (resv_num==0){
			departure_time=1123;
	}
	cout<<"Passanger's Name: "<<passanger.get_Passanger_First_Name(first_name)<<" ";
	cout<<passanger.get_Passanger_Last_Name(last_name)<<endl;
	cout<<"Reservation Number: "<<passanger.get_Reveration_Number(resv_num)<<endl;
	cout<<"Flight Number: "<<passanger.get_Flight_Number(flight_num)<<endl;
	cout<<"Seat Number: "<<passanger.get_Seat_Number(seat_num)<<endl;
	cout<<"Flighting from "<< passanger.get_Departing_Airport(departing_airport);
	cout<<" to "<<passanger.get_Arriving_Airport(arriving_airport)<<endl;
	cout<<"Expected Departure Time: "<< passanger.get_Departure_Time(departure_time)<<endl;
	cout<<"Expected Arrival Time: "<< passanger.get_Arrival_Time(arrival_time)<<endl;
	cout<<""<<endl;
	cout<<"Please arrive at the airport at: "<<passanger.get_Airport_Arrival_Time(departure_time)<<endl;
	return 0;
}
