#include <iostream>
using namespace std;

extern int *readNumbers();
extern void printNumbers(int*, int);
extern void hexDigits(int*, int);

int main ()
{
//	printNumbers(readNumbers(),10);
	hexDigits(readNumbers(),10);
	return 0;
}

