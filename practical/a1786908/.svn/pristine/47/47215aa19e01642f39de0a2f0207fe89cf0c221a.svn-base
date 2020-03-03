#include <iostream>

using namespace std;

int *readNumbers()
{
	int *array= new int[10];

	for(int i=0; i<10; i++)
	{
		cin>>array[i];
	}

	return array;
}
void printNumbers(int *numbers,int length)
{
	for (int i=0; i<length; i++)
	{
		cout<<i;
		cout<<" ";
		cout<<numbers[i]<<endl;
	}
}
void hexDigits(int *numbers,int length)
{
	for(int i=0; i<length; i++)
	{
		switch(numbers[i])
		{
			case 1:
			case 2:
			case 3:
			case 4:
			case 5:
			case 6:
			case 7:
			case 8:
			case 9:
				cout<<i<<endl;
			//	break:
			case 10:
				cout<<"A"<<endl;
			//	break;
			case 11:
				cout<<"B"<<endl;
			//	break;
			case 12:
				cout<<"C"<<endl;
			case 13:
				cout<<"D"<<endl;
			case 14:
				cout<<"E"<<endl;
			case 15:
				cout<<"F"<<endl;
			case 16:
				cout<<"G"<<endl;
		}
	}
}
