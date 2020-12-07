#include <iostream>
#include <string>
#include <vector>

struct Vertex
{
	float x, y, z;

	Vertex(float x, float y, float z)
		: x(x), y(y), z(z) {}

	Vertex(const Vertex& vertex)
		: x(vertex.x), y(vertex.y), z(vertex.z)
	{
		std::cout << "Copied!" << std::endl;
	}
};

std::ostream& operator<<(std::ostream& stream, const Vertex& vertex)
{
	stream << vertex.x << ", " << vertex.y << ", " << vertex.z;
	return stream;
}

int main()
{
	std::vector<Vertex> vertices;
	// We need to give the number of the elements that we will planning to add
	vertices.reserve(2);
	// emplace_back will construct the element directly into the list without copying it here
	// with vertices.push_back(Vertex(1, 2, 3))
	vertices.emplace_back(1, 2, 3); 
	vertices.emplace_back(4, 5, 6);

	// Normal For loop
	for (int i = 0; i< vertices.size(); i++)
		std::cout << vertices[i] << std::endl;

	// Erase function for Vector class
	// It will erase 2nd array in the array list
	vertices.erase(vertices.begin() + 1);

	/* Range-based For Loop */
	for (Vertex& v : vertices)
		std::cout << v << std::endl;

	// Clear all the arrays in vertices vector
	vertices.clear();

	std::cin.get();
}