#include <iostream>
#include <string>

using String = std::string;

class Entity
{
private:
	String m_Name;
public:
	Entity() : m_Name("Unknown") {}
	Entity(const String& name) : m_Name(name) {}

	const String& GetName() const { return m_Name; }
};
 
int main()
{
	{
		// Stack Instantiate
		Entity entity = Entity("Stack");
		std::cout << entity.GetName() << std::endl;
	}
	
	// Heap Instantiate
	Entity* entity = new Entity("Heap");
	std::cout << entity->GetName() << std::endl;

	delete entity;
	std::cin.get();
}