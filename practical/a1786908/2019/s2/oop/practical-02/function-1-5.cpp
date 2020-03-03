#include <iostream>

using namespace std;

void print_summed_matrices(int array1[3][3],int array2[3][3])
{
	int mult;
	for(int i=0; i<3; i++)
	{
		for(int j=0;j<3; j++)
		{
			mult=array1[i][j]+array2[i][j];
			cout<<mult;
			cout<<" ";
		}
		cout<<""<<endl;
	}
}
