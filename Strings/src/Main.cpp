#include <iostream>
#include <string>
#include <stdlib.h>

int main()
{
	//c char format 
	char name[] = "Cherno";
	name[2] = 'a';
	std::cout << name << std::endl;
	char name2[7] = { 'C', 'h', 'e', 'r', 'n', 'o', 0 };
	std::cout << name2 << std::endl;
	
	//c++ string library - preferred
	std::string namestr = "Cherno";
	namestr += " hello!";
	bool contains = namestr.find("no") != std::string::npos;
	std::cout << namestr << std::endl;
	std::cout << contains << std::endl;

	//string literals
	using namespace std::string_literals;
	std::string namelitns = "Cherno"s + " literals hello!";
	std::cout << namelitns << std::endl;
	
	const char* namelit = u8"Cherno";
	const wchar_t* namelit2 = L"Cherno";
	const char16_t* namelit3 = u"Cherno";
	const char32_t* namelit4 = U"Cherno";
	std::cout << namelit << " - " << strlen(namelit) << std::endl;

	std::cin.get();

}