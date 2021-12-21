#include "Intern.hpp"

Intern::Intern()
{
	this->_FormTab[0] = &Intern::makeShrubberyForm;
	this->_FormTab[1] = &Intern::makeRobotForm;
	this->_FormTab[2] = &Intern::makePresidentialForm;
	return ;
}

Intern::~Intern()
{
	return ;
}

Form *Intern::makeShrubberyForm(std::string target)
{
	std::cout << "Intern creates shrubbery creation form" << std::endl;
	Form *tmp = new ShrubberyCreationForm(target);
	return (tmp);
}

Form *Intern::makeRobotForm(std::string target)
{
	std::cout << "Intern creates robotomy request form" << std::endl;
	Form *tmp = new RobotomyRequestForm(target);
	return (tmp);
}

Form *Intern::makePresidentialForm(std::string target)
{
	std::cout << "Intern creates presidential pardon form" << std::endl;
	Form *tmp = new PresidentialPardonForm(target);
	return (tmp);
}

Form *Intern::makeForm(std::string form_name, std::string target)
{
	std::string form_name_tab[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
	{
		if (form_name == form_name_tab[i])
			return ((this->*_FormTab[i])(target));
	}
	Form *tmp = new Form(form_name, 150, 150);
	tmp->setTarget(target);
	return (tmp);
}