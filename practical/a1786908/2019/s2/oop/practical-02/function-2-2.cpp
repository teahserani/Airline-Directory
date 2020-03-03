#include<iostream>
using namespace std;
int binary_to_number(int binary_digit[], int number_of_digits)
{
	int num=0;
	int final=0;
	int array[number_of_digits];
	for(int i=0;i<number_of_digits; i++)
	{
		num=num+i;
	}
	for(int j=num; j>0; j=j/2)
	{
		int r=j%2;
		for(int k=0;k<number_of_digits;k++)
		{
			array[k]=r;
		}
	}
	for(int m=0; m<number_of_digits; m++)
	{
		final *=10;
		final +=array[m];
	}
	return final;
}
