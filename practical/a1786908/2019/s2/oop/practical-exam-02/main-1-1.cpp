#include <iostream>

using namespace std; 

extern int *readNumbers(int);
extern void printNumbers(int *numbers, int length);

int main ()
{
	int n;
	int length;
	printNumbers(readNumbers(n), length);	
	return 0;
}
