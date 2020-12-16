#include <iostream>
#include <vector>
#include <unordered_map>

int main()
{
	std::vector<int> values = { 1, 2, 3, 4, 5 };

	/*
	for (int i = 0; i < values.size(); i++)
		std::cout << values[i] << std::endl;

	std::cout << "----------" << std::endl;

	for (int value : values)
		std::cout << value << std::endl;

	std::cout << "----------" << std::endl;

	for (std::vector<int>::iterator it = values.begin(); it != values.end(); it++)
	{
		std::cout << *it << std::endl;
	}

	std::cout << "----------" << std::endl;
	*/

	using ScoreMap = std::unordered_map<std::string, int>;
	ScoreMap map;

	map["Cherno"] = 5;
	map["C++"] = 2;

	for (ScoreMap::const_iterator it = map.begin(); it != map.end(); it++)
	{
		auto& key = it->first;
		auto& value = it->second;
		std::cout << key << " = " << value << std::endl;
	}

	std::cout << "----------" << std::endl;

	for (auto kv : map)
	{
		auto& key = kv.first;
		auto& value = kv.second;
		std::cout << key << " = " << value << std::endl;
	}

	std::cout << "----------" << std::endl;

	for (auto [key, value] : map)
		std::cout << key << " = " << value << std::endl;

	std::cin.get();
}