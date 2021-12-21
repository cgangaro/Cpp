#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(): _name("Default"), _grade (1)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade = grade;
	return ;
}

Bureaucrat::Bureaucrat(Bureaucrat const &copy): _name(copy.getName()), _grade(copy.getGrade())
{
	return ;
}

Bureaucrat::~Bureaucrat()
{
	return ;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &copy)
{
	this->_grade = copy.getGrade();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &b)
{
	o << b.getName() << ", bureaucrat grade: " << b.getGrade() << std::endl;
	return (o);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

Bureaucrat &Bureaucrat::operator++()
{
	if (this->_grade > 1)
		--this->_grade;
	return (*this);
}

Bureaucrat &Bureaucrat::operator--()
{
	if (this->_grade < 150)
		++this->_grade;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat temp = *this;
	if (this->_grade > 1)
		--this->_grade;
	return (temp);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat temp = *this;
	if (this->_grade < 150)
		++this->_grade;
	return (temp);
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}
