#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {

static int currentID;           // private: variables (in cpp file)
std::string aSpecies;
std::string aName;

static int changeID;

public: 
                        // functions
Animal(std::string aSpecies);
void set_name(std::string aName);
std::string get_species();
std::string get_name();
void set_species(std::string aSpecies);
int get_ID();
~Animal();                      // deconstructor
};
#endif
