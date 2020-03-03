#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std; 

extern void printer(int[10][10]);

int main ()
{
	int array [10][10];
	for (int i=0; i<10; i++)
	{
		for(int j=0; i<10; j++)
		{
			array[i][j]=0;
		}
	}
	printer(array);

//	return 0;
}
	
