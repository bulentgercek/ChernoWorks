#include <iostream>

class Entity
{
};

class Player : public Entity
{
};

int main()
{
	Player* player = new Player();
	Entity* e = player;
}