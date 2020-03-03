#include <iostream>

using namespace std; 

extern int *readNumbers(int);
extern void dayNames(int *days, int length);

int main ()
{
	int n;
	int length;
	dayNames(readNumbers(n), length);	
	return 0;
}

