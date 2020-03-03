#include "Animal.h"
#include "Hunter.h"
#include "Vegie.h"
#include <iostream>

using namespace std;

int main(){

	Animal *animals[5];

	Hunter cheetah("Cheetah");
	Hunter dog("Dog");
	Hunter cat("Cat");

	Vegie rabbit("Rabbit");
	Vegie goat("Goat");

	cheetah.get_species();





	animals[0] = &cheetah;
	animals[1] = &dog;
	animals[2] = &cat;
	animals[3] = &rabbit;
	animals[4] = &goat;

	int i=0;

	for (i;i<5;i++){
		cout << animals[i]->get_species() << endl;
	}
	

	return 0;
}
