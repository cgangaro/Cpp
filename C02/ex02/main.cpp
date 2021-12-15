#include "fixed.hpp"

int main(void)
{

	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c;

	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;

	std::cout << "b = " << b << std::endl;

	a = Fixed(5);
	std::cout << "a = " << a << std::endl;

	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl;
	c = (a + b);
	std::cout << "test" << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "a + b = " << (a + b) << std::endl;
	std::cout << "a - b = " << (a - b) << std::endl;
	std::cout << "a * b = " << (a * b) << std::endl;
	std::cout << "a / b = " << (a / b) << std::endl;

	std::cout << "max(a,b) = " << Fixed::max(a,b) << std::endl;
	std::cout << "min(a,b) = " << Fixed::min(a,b) << std::endl;

	return 0;
}