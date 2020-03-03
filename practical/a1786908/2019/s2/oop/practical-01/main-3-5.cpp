#include <iostream>
#include <stdlib.h>

extern double sumeven(double*,int);

using namespace std;

int main(int argc,char **argv)
{
	double array[5]={1.0,2.0,3.0,4.0,5.0};
	cout<<sumeven(array,5)<<endl;
	return 0 ;
}
