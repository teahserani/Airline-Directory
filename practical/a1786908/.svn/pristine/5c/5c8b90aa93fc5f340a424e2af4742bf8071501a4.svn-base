/*#include <string>
#include <iostream>
#include "cart.h"
#include "meerkat.h"
//int [] animals;
//int volume;
cart::cart()
{
	animals = new meerkat[5];
	volume = 0;
}

bool cart::addMeerkat(meerkat cat)
{
	if (volume==4)
	{
		return false;
	}
	else
	{
		animals[volume] = cat;
		volume++;
		return true;
	}
}

void cart::emptyCart()
{
	volume = 0;
	delete[] animals;
	animals = new meerkat[5];
}

void cart::printMeerkats()
{
	for(int i=0; i<volume;i++)
	{
		std::cout << animals[i].getName() << " " << animals[i].getAge() << std::endl;
	}
	
}

cart::~cart()
{
	delete[] animals;
}
*/
#include<iostream>
#include<string>
#include "cart.h"
using namespace std;
cart::cart()
{
counts=0;
}
bool cart::addMeerkat(meerkat cat)
{
if(counts==4)
return false;
else
{
m[counts++]=cat;
}
}
void cart::emptyCart()
{
for(int i=0;i<counts;i++)
m[i].~meerkat();
counts=0;
}
void cart::printMeerkats()
{
for(int i=0;i<counts;i++)
{
cout<<m[i].getName()<<" "<<m[i].getAge()<<endl;
}
}
