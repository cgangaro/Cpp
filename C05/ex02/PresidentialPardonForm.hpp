#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	public :

		virtual void execute(Bureaucrat const &b) const;

		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &copy);
		PresidentialPardonForm();
		virtual ~PresidentialPardonForm();
};

#endif