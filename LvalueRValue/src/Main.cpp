#include <iostream>
#include <string>

void PrintName(const std::string& name) 
{
	std::cout << "[lvalue] " << name << std::endl;
}

void PrintName(std::string&& name)
{
	std::cout << "[rvalue] " << name << std::endl;
}

int main()
{
	std::string firstname = "Yan";
	std::string lastname = "Chernikov";

	std::string fullname = firstname + lastname;
	
	PrintName(fullname);
	PrintName(firstname + lastname);

	std::cin.get();
}