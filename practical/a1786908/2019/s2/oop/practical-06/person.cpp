#include <string>
#include "person.h"

int person::count = 0;

person::person()
{
  id = count;
  count++;
  salary = 0;
  name = "?";
}

person::person(std::string myName, int Salary)
{
  id = count;
  count++;
  salary = Salary;
  name = myName;
}

void person::setName(std::string myName)
{
  name = myName;
}

std::string person::getName()
{
  return name;
}

void person::setSalary(int mySalary)
{
  salary = mySalary;
}

int person::getSalary()
{
  return salary;
}

person::~person()
{

}
