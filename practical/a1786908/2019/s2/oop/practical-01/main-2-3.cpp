#include <iostream>
#include <stdlib.h>

extern void twofivenine(int*,int);

using namespace std;

int main(int argc,char **argv)
{
	int array[18]={2,2,2,5,5,5,9,9,9,10,-2,8};
	std::cout<<twofivenine(array,18)<<endl;
	return 0 ;
}
