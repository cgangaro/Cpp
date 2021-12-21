#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>

class Bureaucrat
{
	public :

		class GradeTooHighException : public std::exception
		{
			public :

				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public :

				const char *what() const throw();
		};

		int getGrade() const;
		std::string getName() const;

		Bureaucrat &operator++();
		Bureaucrat &operator--();
		Bureaucrat operator++(int);
		Bureaucrat operator--(int);
		Bureaucrat &operator=(Bureaucrat const &copy);

		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &copy);
		Bureaucrat();
		~Bureaucrat();
	
	private :

		std::string const _name;
		int			_grade;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b);

#endif