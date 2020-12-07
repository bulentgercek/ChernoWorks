#include <iostream>

class Random
{
public:
	Random(const Random&) = delete; // Prevent Copying

	static Random& Get()
	{
		static Random instance;
		return instance;
	}

	static float Float() { return Get().IFloat(); }

private:
	float IFloat() { return m_RandomGenerator; }
	Random() {} // Prevent Instantiate

	float m_RandomGenerator = 0.5f;
};

int main()
{
	float number = Random::Float();

	std::cout << number << std::endl;
	std::cin.get();
}