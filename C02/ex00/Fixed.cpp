#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_n = 0;
	std::cout << "Constructor called with private value _n = " << _n << std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called with private value _n = " << this->_n << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed_copy)
{
	std::cout << "Constructor by copy is called" << std::endl;
	*this = fixed_copy;
	return ;
}

int	Fixed::getRawBits(void) const
{
	return this->_n;
}

void	Fixed::setRawBits(int const raw)
{
	this->_n = raw;
	return ;
}

Fixed& Fixed::operator=(Fixed const &fixed_copy)
{
	std::cout << "Operator = called from " << this->_n << " to " << fixed_copy.getRawBits() << std::endl;
	this->_n = fixed_copy.getRawBits();
	return *this;
}
