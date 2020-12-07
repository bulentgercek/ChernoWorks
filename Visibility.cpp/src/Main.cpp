#include <iostream>
#include <string>

int main()
{
	// Heap Example
	int example[6];
	for (int i = 0; i < 5; i++)
		example[i] = 2;
	int* another = new int[5];
	for (int i = 0; i < 5; i++)
		another[i] = 2;

	delete[] another;
	/* Stack Example
	int example[5];
	int* ptr = example;

	for (int i = 0; i < 5; i++)
		example[i] = 2;

	example[2] = 5;
	*(int*)((char*)ptr+8) = 256;

	std::cout << sizeof(example[2]) << std::endl;
	*/
	std::cin.get();
	
}