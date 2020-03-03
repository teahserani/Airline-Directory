#include <iostream>
#include <stdlib.h>

extern int binary_to_number(int [5], int);

using namespace std;

int main ()
{
	int binary_digits[5]=[1,2,3,4,5];
	int number_of_digits=5;
	
	cout<<binary_to_number(binary_digits,number_of_digits))<<endl;	
	return 0;
}
