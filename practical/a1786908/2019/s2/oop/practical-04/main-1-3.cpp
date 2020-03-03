#include <iostream>
#include <stdlib.h>

using namespace std;
extern void cpyia(int[3],int[3],int) ;

int main()
{
	int length=3;
	int old_array[3]={1,2,3};
	int new_array[3];
//	int old_array[length]={1,2,3};
//	int new_array[length];
	cpyia(old_array,new_array,length);

	return 0;
}
