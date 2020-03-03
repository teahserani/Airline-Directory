#include <iostream>

using namespace std;

int size_of_variable_star_t() 
{
	int a, *p;
        p=&a;
	int *t= new int; 
	return sizeof(t);

}
int main ()
{
	int t=6;
	cout<<size_of_variable_star_t()<<endl;
	return 0;
}
