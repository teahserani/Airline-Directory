#include <iostream>
#include <stdlib.h>

extern bool fanarray(int*, int);

using namespace std;

int main (int argc, char **argv)
{
	int array[5]={1,2,0,2,1};
	cout<<fanarray(array,5)<<endl;
	return 0;
}
