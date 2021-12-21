#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

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

		Form form1("Form 1", 50, 49);
		Dylan.signForm(form1);
		form1.beSigned(Bob);
		Bob.signForm(form1);
		form1.execute(Bob);
		//form1.beSigned(Dylan);
		form1.execute(Dylan);
		std::cout << std::endl;
		Form form2("Form 2", 20, 50);
		//form2.execute(Dylan);
		//form2.execute(Bob);
		form2.beSigned(Dylan);
		form2.execute(Bob);
		Dylan.executeForm(form2);
		Bob.executeForm(form2);
		std::cout << std::endl;

		PresidentialPardonForm PresidentialPardonForm("Camille");
		Bureaucrat President("President", 5);
		//PresidentialPardonForm.execute(Bob);
		PresidentialPardonForm.beSigned(Bob);
		PresidentialPardonForm.execute(President);
		std::cout << std::endl;

		RobotomyRequestForm RobotomyRequestForm("PhillyFlingue");
		RobotomyRequestForm.beSigned(Dylan);
		RobotomyRequestForm.execute(Bob);
		std::cout << std::endl;

		ShrubberyCreationForm ShrubberyCreationForm("MangeMort");
		ShrubberyCreationForm.beSigned(President);
		ShrubberyCreationForm.execute(Bob);

	}
	catch(std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}