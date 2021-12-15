#include "Fixed.hpp"

Fixed::Fixed(void)
{
	this->_fixed_point = 0;
	std::cout << "Constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const int arg)
{
	this->_fixed_point = arg << this->_raw;
	std::cout << "Constructor called with int"<< std::endl;
	return ;
}

Fixed::Fixed(const float arg)
{
	this->_fixed_point = roundf(arg * (1 << this->_raw));
	std::cout << "Constructor called with float"<< std::endl;
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	return ;
}

Fixed::Fixed(Fixed const &fixed_copy)
{
	std::cout << "Constructor by copy is called" << std::endl;
	*this = fixed_copy;
	return ;
}

int	Fixed::toInt(void) const
{
	return ((int)(this->_fixed_point >> this->_raw));
}

float	Fixed::toFloat(void) const
{
	return ((float)(this->_fixed_point) / (1 << this->_raw));
}

int	Fixed::getFixedPoint(void) const
{
	return this->_fixed_point;
}

int	Fixed::getRawBits(void) const
{
	return this->_raw;
}

Fixed& Fixed::operator=(Fixed const &fixed_copy)
{
	std::cout << "Operator = called from " << this->_fixed_point << " to " << fixed_copy.getFixedPoint() << std::endl;
	this->_fixed_point = fixed_copy.getFixedPoint();
	return *this;
}

std::ostream &operator<<(std::ostream &out, Fixed const &fixed)
{
	out << fixed.toFloat();
	return out;
}
