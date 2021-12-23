#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <string>
#include <iostream>
#include <list>

class Error_Number_Not_Found: public std::exception
{
	public:

		const char *what() const throw()
		{
			return ("Error: Number not found");
		}
};

template <typename T>
int const &easyfind(T const &container, int const &x)
{
	if (std::find(container.begin(), container.end(), x) == container.end())
	{
		throw Error_Number_Not_Found();
	}
	return (x);
}

#endif