#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public :

		Intern();
		~Intern();

		Form *makeShrubberyForm(std::string target);
		Form *makeRobotForm(std::string target);
		Form *makePresidentialForm(std::string target);
		Form *makeForm(std::string form_name, std::string target);
	
	private :

		Form *(Intern::*_FormTab[3])(std::string target);
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);

#endif