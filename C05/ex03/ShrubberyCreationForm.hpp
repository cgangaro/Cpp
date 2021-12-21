#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include <fstream>
#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	public :

		class ErrorFile : public std::exception
		{
			public :

				const char *what() const throw();
		};

		virtual void execute(Bureaucrat const &b) const;
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &copy);
		ShrubberyCreationForm();
		virtual ~ShrubberyCreationForm();
};

#endif