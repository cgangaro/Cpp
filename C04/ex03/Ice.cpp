#include <iostream>
#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("ice")
{}

Ice::Ice(Ice const &cpy)
{
	this->type = cpy.type;
}

Ice &Ice::operator=(Ice const &cpy)
{
	if (&cpy == this) {
		return *this;
	}

	this->type = cpy.type;
	return *this;
}

Ice::~Ice()
{}

AMateria	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}