#include "Stock_item.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	Stock_item apple("Apple", 101);
	apple.get_description();
	apple.get_item_number();
	return 0;
}
