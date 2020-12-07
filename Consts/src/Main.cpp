#include <iostream>

class Entity
{
private:
	int m_X, m_Y;
	mutable int debug;
public:
	int GetX() const
	{
		debug = 1;
		return m_X;
	}
	void SetX(int x)
	{
		m_X = x;
	}
};

void PrintEntity(const Entity& e)
{
	std::cout << e.GetX() << std::endl;
}

int main()
{
	const int MAX_AGE = 90;
	int* a = new int; //

	*a = 2;
	std::cout << *a << " - " << a << std::endl;

	Entity e;
	e.SetX(5);
	PrintEntity(e);

	std::cin.get();
}