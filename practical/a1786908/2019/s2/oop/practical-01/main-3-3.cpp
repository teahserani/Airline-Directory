#include <iostream>
#include <stdlib.h>

extern double weightedaverage(int*,int);

using namespace std;

int main(int argc,char **argv)
{
	int array[5]={1,1,2,3,3};
	cout<<weightedaverage(array,5)<<endl;
	return 0 ;
}
