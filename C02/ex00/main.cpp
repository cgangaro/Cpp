#include "fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cout << "a = " << a.getRawBits() << std::endl;
	std::cout << "b = " << b.getRawBits() << std::endl;
	std::cout << "c = " << c.getRawBits() << std::endl;

	Fixed d;

	std::cout << "d = " << d.getRawBits() << std::endl;
	d.setRawBits(5);
	std::cout << "d2 = " << d.getRawBits() << std::endl;
	c = d;
	std::cout << "c = " << c.getRawBits() << std::endl;
	std::cout << "d3 = " << d.getRawBits() << std::endl;
	return 0;
}