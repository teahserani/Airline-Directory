#include"animal.h"
int animal::currentID = 0; 
int animal::changeID = 0;

animal::animal(std::string aSpecies){ 
    currentID = changeID;       // private variables 
    changeID++;
    aName = " ?";
    this->aSpecies = aSpecies;
}
void animal::set_name(std::string aName){
    this->aName = aName;            // set = assigning name
}

void animal::set_species(std::string aSpecies){
    this->aSpecies = aSpecies;      // assigning species 
}

std::string animal::get_species(){      // get = return
    return aSpecies;
}

std::string animal::get_name(){
    return aName;
}

int animal::get_ID(){
    return currentID;
}

animal::~animal(){     
}
