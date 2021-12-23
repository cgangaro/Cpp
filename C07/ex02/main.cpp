#include <iostream>
#include "Array.hpp"

#define MAX_VAL 150
int main(int, char**)
{
	int f;
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    Array<int> tmp = numbers;
    Array<int> test(tmp);
	f = 0;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			f = 1;
            return 1;
        }
    }
	if (f == 0)
        std::cout << "mirror == numbers" << std::endl;
	f = 0;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (tmp[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			f = 1;
            return 1;
        }
    }
	if (f == 0)
        std::cout << "tmp == numbers" << std::endl;
	f = 0;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (test[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			f = 1;
            return 1;
        }
    }
	if (f == 0)
        std::cout << "test == numbers" << std::endl;
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}
