#include "PresidentialPardonForm.hpp"

void PresidentialPardonForm::execute(Bureaucrat const &b) const
{
	if (b.getGrade() > this->getRequiredGradeExecute())
		throw Bureaucrat::GradeTooLowException();
	if (!this->getSigned())
		throw Form::FormNotSigned();
	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 5, 25)
{
	this->setTarget("Default");
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("PresidentialPardonForm", 5, 25)
{
	this->setTarget(target);
	return ;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy): Form(copy)
{
	this->setTarget(copy.getTarget());
	return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return ;
}
