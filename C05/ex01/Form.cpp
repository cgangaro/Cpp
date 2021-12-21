#include "Form.hpp"

Form::Form(): _name("Default Form"), _signed(0), _requiredGradeExecute(150), _requiredGradeSign(150)
{
	return ;
}

Form::Form(std::string name, int requiredGradeExecute, int requiredGradeSign): _name(name), _requiredGradeExecute(requiredGradeExecute), _requiredGradeSign(requiredGradeSign)
{
	if (requiredGradeExecute < 1 || requiredGradeSign < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (requiredGradeExecute > 150 || requiredGradeSign > 150)
		throw Bureaucrat::GradeTooLowException();
	return ;
}

Form::Form(Form const &copy): _name(copy.getName()), _signed(copy.getSigned()), _requiredGradeExecute(copy.getRequiredGradeExecute()), _requiredGradeSign(copy.getRequiredGradeSign())
{
	return ;
}

Form::~Form()
{
	return ;
}

Form &Form::operator=(Form const &copy)
{
	this->_signed = copy.getSigned();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, Form const &b)
{
	o << "Form name : " << b.getName() << ", Required Grade Execute : " << b.getRequiredGradeExecute();
	o << ", Required Grade Execute : " << b.getRequiredGradeExecute() << ", Signed : " << b.getSigned() << std::endl;
	return (o);
}

int Form::getRequiredGradeExecute() const
{
	return (this->_requiredGradeExecute);
}

int Form::getRequiredGradeSign() const
{
	return (this->_requiredGradeSign);
}

std::string Form::getName() const
{
	return (this->_name);
}

bool Form::getSigned() const
{
	return (this->_signed);
}

const char *Form::FormAlreadySigned::what() const throw()
{
	return("Form already signed");
}

void Form::beSigned(Bureaucrat const &b)
{
	if (this->_signed)
		throw Form::FormAlreadySigned();
	else if (b.getGrade() > this-> _requiredGradeSign)
		throw Bureaucrat::GradeTooLowException();
	this->_signed = 1;
	return ;
}
