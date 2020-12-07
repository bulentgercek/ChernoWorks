#include <iostream>

int main()
{
	int x = 8;
	auto f = [=]() mutable
	{
		x++;
		std::cout << x << std::endl;
	};

	f();
	std::cout << x << std::endl;
	std::cin.get();
}