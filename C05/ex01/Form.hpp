#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

		class FormAlreadySigned : public std::exception
		{
			public :

				const char *what() const throw();
		};

		void beSigned(Bureaucrat const &b);

		std::string getName() const;
		bool getSigned() const;
		int getRequiredGradeExecute() const;
		int getRequiredGradeSign() const;

		Form &operator=(Form const &copy);

		Form(std::string name, int requiredGradeExecute, int requiredGradeSign);
		Form(Form const &copy);
		Form();
		~Form();
	
	private :

		std::string const _name;
		bool _signed;
		int const _requiredGradeExecute;
		int const _requiredGradeSign;
};

std::ostream &operator<<(std::ostream &o, Form const &b);

#endif