#ifndef PERSON_H
#define PERSON_H

#include <string>

class person
{
  static int count;
  int id;
  int salary;
  std::string name;

public:

  person();

  person(std::string myName, int Salary);

  void setName(std::string myName);

  std::string getName();

  void setSalary(int mySalary);

  int getSalary();

  ~person();
};

#endif
