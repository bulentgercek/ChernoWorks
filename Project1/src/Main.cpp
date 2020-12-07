#include <iostream>

class Entity
{
public:
	float X, Y;
	
	Entity()
	{
		X = 0; Y = 0;
	}

	void Move(float xa, float ya)
	{
		X += xa;
		Y += ya;
	}

	void PrintCoords()
	{
		std::cout << X << "," << Y << std::endl;
	}
};

class Player : public Entity
{
public:
	const char* Name;

	void PrintName()
	{
		std::cout << Name <<  std::endl;
	}
};

int main()
{
	std::cout << sizeof(Entity) << std::endl;
	std::cout << sizeof(Player) << std::endl;
	
	Player player;
	player.Move(2, 3);
	player.PrintCoords();
	player.X = 4;
	player.PrintCoords();
	std::cin.get();
}