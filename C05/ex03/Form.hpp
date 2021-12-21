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

		class FormNotSigned : public std::exception
		{
			public :

				const char *what() const throw();
		};

		void beSigned(Bureaucrat const &b);
		virtual void execute(Bureaucrat const &b) const;

		void	setTarget(std::string const target);

		std::string getName() const;
		bool getSigned() const;
		int getRequiredGradeExecute() const;
		int getRequiredGradeSign() const;
		std::string getTarget() const;

		Form &operator=(Form const &copy);

		Form(std::string name, int requiredGradeExecute, int requiredGradeSign);
		Form(Form const &copy);
		Form();
		virtual ~Form();
	
	private :

		std::string const _name;
		bool _signed;
		int const _requiredGradeExecute;
		int const _requiredGradeSign;
		std::string _target;
};

std::ostream &operator<<(std::ostream &o, Form const &b);

#endif