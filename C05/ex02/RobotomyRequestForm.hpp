#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"

class RobotomyRequestForm: public Form
{
	public :

		virtual void execute(Bureaucrat const &b) const;

		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &copy);
		RobotomyRequestForm();
		virtual ~RobotomyRequestForm();
};

#endif