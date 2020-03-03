#include"Animal.h"
int Animal::currentID = 0; 
int Animal::changeID = 0;

Animal::Animal(std::string aSpecies){ 
    currentID = changeID;       // private variables 
    changeID++;
    aName = " ?";
    this->aSpecies = aSpecies;
}
void Animal::set_name(std::string aName){
    this->aName = aName;            // set = assigning name
}

void Animal::set_species(std::string aSpecies){
    this->aSpecies = aSpecies;      // assigning species 
}

std::string Animal::get_species(){      // get = return
    return aSpecies;
}

std::string Animal::get_name(){
    return aName;
}

int Animal::get_ID(){
    return currentID;
}

Animal::~Animal(){     
}
