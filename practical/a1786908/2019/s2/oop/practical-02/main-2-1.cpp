#include <string>
#include <iostream>

using namespace std;

extern void print_as_binary(string);
int main()
{
	string decimal_number="12.0";

	print_as_binary(decimal_number);
	
	return 0;
}
