#include "Animal.h"
#include "Hunter.h"
#include <string>
#include <iostream>


using namespace std;

Hunter::Hunter(string aSpecies) : Animal(aSpecies), killNum(0){
}

void Hunter::record_kill(string kill){
	
	string *tempKills;

	int i = 0;

	if (killNum > 0){
		tempKills = new string[killNum];

		for (i; i<killNum; i++){
			tempKills[i] = kills[i];
		}

		delete[] kills;
	}

	killNum++;

	kills = new string[killNum];

	for (i=0;i<(killNum-1); i++){
		kills[i] = tempKills[i];
	}

	//cout << kills << endl;

	kills[killNum-1]=kill;

}

int Hunter::numberOfKills(){
	return killNum;
}

string * Hunter::get_kills(){
	return kills;
}  
