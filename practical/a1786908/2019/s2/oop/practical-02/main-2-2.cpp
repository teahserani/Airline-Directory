#include<iostream>
#include<stdlib.h>

extern int binary_to_number (int[9], int);

using namespace std;

int main ()
{
	int binary_digit[9]={1,3};
	int number_of_digits=9;
	cout<<binary_to_number(binary_digit,number_of_digits)<<endl;
}
