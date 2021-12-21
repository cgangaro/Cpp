#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat Bob("Bob", 20);
		Bureaucrat Dylan("Dylan", 50);
		//Bureaucrat John("William", 200);
		//Bureaucrat William("William", -50);

		std::cout << Bob;
		std::cout << Dylan;

		std::cout << ++Bob;
		std::cout << Bob;
		std::cout << Bob++;
		std::cout << Bob;
		Bob++;
		std::cout << Bob;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}