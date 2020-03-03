#include"Animal.h"
#include "Vegie.h"
#include <string>
#include<iostream>
#include<vector>
using namespace std;


Vegie::Vegie(string aSpecies) : Animal::Animal(aSpecies)
{
	aVegie;
}
void Vegie::set_favourite_food(string aVegie)
{
	this->aVegie=aVegie;
}
string Vegie::getFavouriteFood()
{
	return aVegie;
}
