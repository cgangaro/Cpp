#include "Intern.hpp"
#include "Bureaucrat.hpp"

int main(void)
{
	Intern intern;

	Form *form1 = intern.makeForm("Form 1", "1");
	Form *form2 = intern.makeForm("RobotomyRequestForm", "2");
	std::cout << *form1 << std::endl;
	std::cout << *form2 << std::endl;
	std::cout << form1->getTarget() << std::endl;
	std::cout << form2->getTarget() << std::endl;

	Bureaucrat Bob("Bob", 1);
	Bob.signForm(*form1);
	Bob.executeForm(*form1);
	Bob.signForm(*form2);
	Bob.executeForm(*form2);
	delete form1;
	delete form2;
	return 0;
}