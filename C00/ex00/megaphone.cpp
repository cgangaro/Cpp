#include <stdio.h>
#include <iostream>

int	main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		if (argc == 1)
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		else
			std::cout << "2 argument expected" << std::endl;
		return 1;
	}
	i = 0;
	while (argv[1][i])
	{
		if (argv[1][i] >= 97 && argv[1][i] <= 122)
			std::cout << (char)(argv[1][i] - 32);
		else
			std::cout << argv[1][i];
		i++;
	}
	std::cout << std::endl;
	return 0;
}