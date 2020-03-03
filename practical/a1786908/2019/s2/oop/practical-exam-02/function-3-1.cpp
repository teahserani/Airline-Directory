
#include <iostream>
using namespace std; 

int *readNumbers(int n) 
{
	int *array= new int[n];
	for (int i=0; i<n; i++)
	{
		cin>>array[i];
	}
	return array;
}

/*void printNumbers(int *numbers,int length)
{
	for (int i=0; i<length; i++)
	{
		cout<<i;
		cout<<" ";
		cout<<numbers[i]<<endl;
	}
}*/
bool sortedArray(int *numbers, int length)
{
	bool array=false;
	int n= length-1;
	for(int i=0;i<n;i++)
	{
		if(numbers[i]-numbers[i-1]==1)
		{
			array=true;
		}
		if(numbers[i-1]-numbers[i]==1)
		{
			array=true;
		}
	}
	return array;
}
