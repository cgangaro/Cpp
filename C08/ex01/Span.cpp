#include "Span.hpp"

Span::Span(): _n(0)
{

}

Span::Span(unsigned int n): _n(n)
{
	
}

Span::Span(Span const &copy)
{
	this->_n = copy._n;
	this->_array = copy._array;
}

Span::~Span()
{

}

Span &Span::operator=(Span const &copy)
{
	this->_array = copy._array;
	this->_n = copy._n;
	return (*this);
}

void	Span::addNumber(int const a)
{
	std::cout << "size = " << this->_array.size() << std::endl;
	if (this->_array.size() >= this->_n)
		throw Span::Tab_Full();
	this->_array.insert(a);
	std::cout << "size of array = " << this->_array.size() << std::endl;
}

int	Span::shortestSpan() const
{
	if (this->_array.size() <= 1)
		throw Span::Tab_Empty_Or_One();
	std::set<int>::const_iterator a = this->_array.begin();
	std::set<int>::const_iterator b = ++this->_array.begin();
	int min_diff = *b - *a;
	while (b != this->_array.end())
	{
		int diff = *b - *a;
		if (diff < min_diff)
			min_diff = diff;
		a++;
		b++;
	}
	return (min_diff);
}

int	Span::longestSpan() const
{
	if (this->_array.size() <= 1)
		throw Span::Tab_Empty_Or_One();
	std::set<int>::const_iterator a = this->_array.begin();
	std::set<int>::const_iterator b = ++this->_array.begin();
	int min = *a;
	while (b != this->_array.end())
	{
		a++;
		b++;
	}
	return (*a - min);
}
