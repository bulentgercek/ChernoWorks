#include <iostream>
#include <string>

void PrintEntity(const Entity& e);

class Entity
{
public:
	int x, y;

	Entity(int x, int y)
	{
		this->x = x;
		this->y = y;

		Entity& e = *this;

		PrintEntity(*this);
	}

	int GetX() const
	{
		Entity& e = *this;
		return x;
	}
};

void PrintEntity(Entity* e)
{
	std::cout << e->GetX() << std::endl;
}

int main()
{
	Entity entity(5, 12);
	
	std::cin.get();
}