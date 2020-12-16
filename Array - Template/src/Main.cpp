#include <iostream>
#include <array>
#include <string>

template <typename T, size_t S>
class Array
{
public:
	constexpr size_t Size() const { return S; }

	T& operator[](size_t index) { return m_Data[index]; }
	const T& operator[](size_t index) const { return m_Data[index]; }

	T* operator*() { return *m_Data; }
	T* Data() { return m_Data; }
	const T* Data() const { return m_Data; }

private:
	T m_Data[S];
};


int main()
{
#define __stringExample
#if defined(__intExample)
	Array<int, 5> data = {};
	
	memset(&data[0], 0, data.Size() * sizeof(int));

	data[1] = 5;
	data[4] = 7;

#endif
#if defined(__stringExample)
	Array<std::string, 2> data = {};

	data[0] = "Cherno";
	data[1] = "Bulent";

#endif

	for (size_t i = 0; i < data.Size(); i++)
	{
		std::cout << data[i] << std::endl;
	}

	auto* dataptr = data.Data();
	
	*data.Data();

	std::cin.get();
}