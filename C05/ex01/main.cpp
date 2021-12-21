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
		std::cout << std::endl;

		Form form1("Form 1", 50, 50);
		std::cout << std::endl;
		std::cout << form1;
		std::cout << std::endl;

		Bob.signForm(form1);
		std::cout << std::endl;
		std::cout << form1;
		std::cout << std::endl;

		Form form2("Form 2", 20, 20);
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;

		Dylan.signForm(form2);
		std::cout << std::endl;
		std::cout << form2;
		std::cout << std::endl;
	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}