#include <iostream>
#include <stdlib.h>
#include <string>

using namespace std;

void copy_2d_strings(string first[][2], string second[][2], int n)
{
	string temp;
	for (int i=0; i<n; i++)
	{
		for(int j=0; j<2; j++)
		{
			temp=first[i][j];
			second[i][j]=temp;
//			cout<<temp;
//			cout<<" ";
		}
//		cout<<""<<endl;
	}
//	cout<<""<<endl;
}



