#include <iostream>

enum Vars
{
	A = 1, B, C
};

int main()
{
	Vars value = B;

	std::cout << value << std::endl;

	std::cin.get();
}