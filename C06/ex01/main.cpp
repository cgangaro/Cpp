#include <iostream>

struct Data{};

uintptr_t serialize(Data* content)
{
	return reinterpret_cast<uintptr_t>(content);
}

Data* deserialize(uintptr_t content)
{
	return reinterpret_cast<Data*>(content);
}

int main()
{
	Data *data_test = new Data;
	uintptr_t int_test = serialize(data_test);
	std::cout << int_test << std::endl;
	std::cout << deserialize(int_test) << std::endl;
	delete data_test;
	return 0;
}