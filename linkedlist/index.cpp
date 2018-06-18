#include <iostream>

#include "LinkedList.hpp"

int main(void)
{
	srand(time(NULL));

	LinkedList list;

	for(int index = 0; index < 20; ++index)
		list.push_back(rand() % 20);

	for(int index = -20; index < 25; ++index)
		std::cout << list.at(index) << std::endl;

	return 0;
}
