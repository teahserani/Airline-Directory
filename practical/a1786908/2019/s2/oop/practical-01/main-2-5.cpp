#include <iostream>
#include <stdlib.h>

extern bool descending(int*,int);

using namespace std;

int main(int argc,char **argv)
{
	int array [5]={1,2,3,4,5};
	//int array[5]={5,4,3,2,1};
	cout<<descending(array,5)<<endl;
	return 0 ;
}
