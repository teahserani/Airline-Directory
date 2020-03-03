#include <iostream>
#include <stdlib.h>

extern void passorfail(char);

using namespace std;

int main(int argc,char **argv)
{
	char grade='B';
	cout<<passorfail('B')<<endl;
	return 0 ;
}
