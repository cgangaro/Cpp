#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>

Base *generate(void)
{
	srand(time(NULL));
	int i = rand() % 3;
	//std::cout << "i = " << i << std::endl;
	switch (i)
	{
		case 0: return (new A);
		case 1: return (new B);
		case 2: return (new C);
		default: break;
	}
	return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "A (test with *)" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B (test with *)" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C (test with *)" << std::endl;
	return ;
}

void	identify(Base &p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A (test with &)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "can't cast A" << std::endl;
	}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B (test with &)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "can't cast B" << std::endl;
	}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C (test with &)" << std::endl;
	}
	catch(std::exception &e)
	{
		std::cout << "can't cast C" << std::endl;
	}
	return ;
}

int	main(void)
{
	Base *test = generate();
	identify(test);
	identify(*test);
}