#include "whatever.hpp"
#include <iostream>

int main(void)
{
	int a = 42;
	int b = 50;

	::swap<int>(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min = " << ::min<int>(a, b) << std::endl;
	std::cout << "max = " << ::max<int>(a, b) << std::endl;
	std::cout << std::endl;

	float c = 42.42f;
	float d = 50.50f;

	::swap<float>(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min = " << ::min<float>(c, d) << std::endl;
	std::cout << "max = " << ::max<float>(c, d) << std::endl;
	std::cout << std::endl;

	std::string e = "chaine 1";
	std::string f = "chaine 2";

	::swap(e, f);
	std::cout << "e = " << e << ", f = " << f << std::endl;
	std::cout << "min = " << ::min(e, f) << std::endl;
	std::cout << "max = " << ::max(e, f) << std::endl;
	return 0;
}