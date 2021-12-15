#include "Fixed.hpp"

Fixed::Fixed(int const n): _n( n)
{
	std::cout << "Constructor called with value n = " n << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Constructor called with private value _n = " this->_n << std::endl;
	return ;
}

Fixed::Fixed(Fixed& const fixed_copy)
{
	std::cout << "Constructor by copy is called" << std::endl;
	*this = fixed_copy;
	return ;
}

int	Fixed::getValue(void) const
{
	retrun this->_n;
}

Fixed& Fixed::operator=(Fixed& const fixed_copy)
{
	std::cout << "Operator = called from " this->_n << " to " << fixed_copy.getValue() << std::endl;
	this->_n = fixed_copy.getValue();
	return *this;
}

Fixed Fixed::operator+(Fixed& const fixed_copy) const
{
	std::cout << "Operator + called from " this->_n << " and " << fixed_copy.getValue() << std::endl;
	return Fixed(this->_n + fixed_copy.getValue());
}

std::ostream& operator<<(std::ostream& o, Fixed& const fixed_copy)
{
	o << fixed_copy.getValue();
	retrun o;
}