#include "iter.hpp"
#include <iostream>

void	ft_test(int const &a)
{
	std::cout << a << std::endl;
}

int main(void)
{
	int x[20];

	for (int i = 0; i < 20; i++)
	{
		x[i] = i;
	}
	::iter(x, 20, ft_test);
	return 0;
}
