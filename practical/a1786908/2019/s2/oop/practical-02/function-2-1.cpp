#include<string>
#include<iostream>
void print_as_binary(std::string decimal_number)
{
	std::string binary="";
	for(int i=9; i>0; i=i/2)
	{
		int r=i%2;
		char a= char(r);
		std::cin>>a;
		binary+=a;
	}
	std::cout <<binary<< std::endl;
}
