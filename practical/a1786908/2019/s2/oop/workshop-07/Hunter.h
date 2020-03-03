//#pragma once
#include "Animal.h"
#ifndef HUNTER_H
#define HUNTER_H

         // parent class

#include <vector>           
#include <string>

class Hunter : public Animal{       // inheriting from another class 

//    std::string kill;
  private:  
  std::vector<std::string> kills;


    public:

    Hunter(std::string aSpecies);       // functions

    void record_kill(std::string kill);

    int numberOfKills();

    std::string * get_kills();

   // std::vector<std::string> get_kills();
//   ~Hunter();
};
#endif
