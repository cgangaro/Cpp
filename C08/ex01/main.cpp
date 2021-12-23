#include "Span.hpp"

int main(void)
{
	try
	{
		Span a(5);

		a.addNumber(4);
		a.addNumber(25);
		a.addNumber(2);
		a.addNumber(19);
		a.addNumber(-5);
		//a.addNumber(-5);

		std::cout << a.shortestSpan() << std::endl;
		std::cout << a.longestSpan() << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}
