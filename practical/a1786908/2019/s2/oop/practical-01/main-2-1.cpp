#include <iostream>
#include <stdlib.h>

extern int minimum(int*,int);

using namespace std;

int main(int argc,char **argv)
{
	int array[5]={1,2,3,4,5};
	cout<<minimum(array,5)<<endl;
	return 0 ;
}


