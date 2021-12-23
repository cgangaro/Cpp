#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <set>

class Span
{
	public:

		class Tab_Full: public std::exception
		{
			const char *what() const throw()
			{
				return ("Error: Array is full");
			}
		};

		class Tab_Empty_Or_One: public std::exception
		{
			const char *what() const throw()
			{
				return ("Error: Not enough of numbers in array");
			}
		};

		Span();
		Span(unsigned int n);
		Span(Span const &copy);
		~Span();
		Span &operator=(Span const &other);

		void	addNumber(int const a);
		int	shortestSpan() const;
		int	longestSpan() const;
	
	private:

		unsigned int _n;
		std::set<int>	_array;
	
};

#endif