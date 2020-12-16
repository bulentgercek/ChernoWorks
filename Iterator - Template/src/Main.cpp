#include <iostream>
#include <vector>
#include "../../VectorDynamicArray/src/Vector.h"

int main()
{
	Vector<std::string> values;
	values.EmplaceBack("1");
	values.EmplaceBack("2");
	values.EmplaceBack("Cherno");
	values.EmplaceBack("4");
	values.EmplaceBack("Bulent");

	std::cout << "Not using iterators:\n";
	for (int i = 0; i < values.Size(); i++)
		std::cout << values[i] << std::endl;

	std::cout << "Range-based for loop:\n";
	for (auto& value : values)
		std::cout << value << std::endl;

	std::cout << "Iterator:\n";
	for (Vector<std::string>::Iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

#if 0
	std::vector<int> values = { 1, 2, 3, 4, 5 };

	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << std::endl;

	std::cout << std::endl;

	for (int value : values)
		std::cout << value << std::endl;

	std::cout << std::endl;

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

#endif
	std::cin.get();
}