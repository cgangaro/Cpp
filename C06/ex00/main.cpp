#include <string>
#include <iostream>
#include <stdlib.h>
#include <math.h>

bool	only_digit(std::string s)
{
	for (size_t i = 0; s[i]; i++)
	{
		if (!(std::isdigit(s[i])))
		{
			if (!(s[i] == '.' || s[i] == 'f' || s[i] == '-'))
				return false;
			else if (s[i] == 'f' && !(i == s.length()))
				return false;
			else if (s[i] == '.' && i == s.length())
				return false;
		}
	}
	return true;
}

int	main(int argc, char *argv[])
{
	if (argc != 2)
		return 0;
	std::string s = argv[1];
	std::cout << "char: ";
	if (!(only_digit(s)) && s.length() != 1)
	{
		if (s.length() == 1)
			std::cout << "'*'" << std::endl;
		else
			std::cout << "impossible" << std::endl;
	}
	else
	{
		if (s[0] >= 32 && s[0] <= 126)
			std::cout << static_cast<char>(s[0]) << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	double val;
	val = atof(s.c_str());
	std::cout << "int: ";
	if (val > 2147483647 || val < -2147483648 || !(only_digit(s)))
		std::cout << "impossible" << std::endl;
	else
		std::cout << static_cast<int>(val) << std::endl;
	std::cout << "float: ";
	if (isnan(val))
		std::cout << "nanf" << std::endl;
	else
	{
		int i = static_cast<int>(val);
		double y = val - i;
		if (y == 0)
			std::cout << static_cast<float>(val) << ".0f" << std::endl;
		else
			std::cout << static_cast<float>(val) << "f" << std::endl;
	}
	std::cout << "double: ";
	if (isnan(val))
		std::cout << "nan" << std::endl;
	else
	{
		int j = static_cast<int>(val);
		double k = val - j;
		if (k == 0)
			std::cout << (val) << ".0" << std::endl;
		else
			std::cout << (val) << std::endl;
	}
	return 0;
}
