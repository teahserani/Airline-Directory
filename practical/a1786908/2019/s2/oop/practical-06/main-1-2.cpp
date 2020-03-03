#include <iostream>
#include <string>
#include "person.h"

using namespace std; 

int main()
{	
/	person nick;
	nick.setName("Nick");
	nick.setSalary(1000);
	person joe;
	joe.setName("Joe");
	joe.setSalary(2000);
	person sara;
	sara.setName("Sara");
	sara.setSalary(3000);
	person mary;
	mary.setName("Mary");
	mary.setSalary(4000);
	return 0;
}
