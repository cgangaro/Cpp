#include "fixed.hpp"

int main(void)
{

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed d(b);

	a = Fixed(1234.1234f);

	std::cout << "a fixed = " << a.getFixedPoint() << std::endl;
	std::cout << "b fixed = " << b.getFixedPoint() << std::endl;
	std::cout << "c fixed = " << c.getFixedPoint() << std::endl;
	std::cout << "d fixed = " << d.getFixedPoint() << std::endl;

	std::cout << "a to float = " << a.toFloat() << std::endl;
	std::cout << "b to float = " << b.toFloat() << std::endl;
	std::cout << "c to float = " << c.toFloat() << std::endl;
	std::cout << "d to float = " << d.toFloat() << std::endl;

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}