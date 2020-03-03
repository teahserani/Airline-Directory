#include "Flight.h"
#include "Passanger.h"
#include <iostream>

using namespace std;

int main(){
	
	string last_name;
	cout<<"Last Name ";
	cin>> last_name;
	cout<<""<<endl;

	Passanger passanger(last_name);

	string departing_airport;
	cout<<"Departing_Airport";
	cin>>departing_airport;
	cout<<""<<endl;

        string arriving_airport;
	cout<<"Arriving Airport ";
	cin>>arriving_airport;
	cout<<" "<<endl;
	if(departing_airport!= "ZAD" ){
		departing_airport= "ERROR";
	}
	if(departing_airport!= "DCA" ){
		departing_airport= "ERROR";
	}
	if(departing_airport!= "BOS" ){
		departing_airport= "ERROR";
	}
	if(departing_airport!= "ADL" ){
		departing_airport= "ERROR";
	}
	if(departing_airport!= "JBD" ){
		departing_airport= "ERROR";
	}
	if(arriving_airport!= "ZAD" ){
		arriving_airport= "ERROR";
	}
	if(arriving_airport!= "DCA" ){
		arriving_airport= "ERROR";
	}
	if(arriving_airport!= "BOS" ){
		arriving_airport= "ERROR";
	}
	if(arriving_airport!= "ADL" ){
		arriving_airport= "ERROR";
	}
	if(arriving_airport!= "JBD" ){
		arriving_airport= "ERROR";
	}

	cout<<"TESTING CODE"<<endl;
	cout<<"Flighting from "<< passanger.get_Departing_Airport(departing_airport);
	cout<<" to "<<passanger.get_Arriving_Airport(arriving_airport)<<endl;

	return 0;
}


