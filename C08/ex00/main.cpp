#include "easyfind.hpp"
#include <iostream>

int main(void)
{
	std::list<int> list;

	list.push_back(50);
	list.push_back(500);
	list.push_back(5000);

	try
	{
		std::cout << easyfind(list, 50) << std::endl;
		std::cout << easyfind(list, 500) << std::endl;
		std::cout << easyfind(list, 5000) << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
	{
		std::cout << easyfind(list, 501) << std::endl;
		std::cout << easyfind(list, 5001) << std::endl;
		std::cout << easyfind(list, 50001) << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

	std::vector<int> vector;

	vector.push_back(1);
	vector.push_back(2);
	vector.push_back(3);
	try
	{
		std::cout << easyfind(vector, 1) << std::endl;
		std::cout << easyfind(vector, 2) << std::endl;
		std::cout << easyfind(vector, 3) << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	try
	{
		std::cout << easyfind(vector, 4) << std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
	return 0;
}
