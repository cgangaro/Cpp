#include "AMateria.hpp"

AMateria::AMateria()
{}

AMateria::AMateria(std::string const &type)
{
	const int diff = 'a' - 'A';

	std::string lower;
	lower.reserve(type.length());

	for (size_t i = 0; i < type.size(); i++)
	{
		lower += (type[i] >= 'A' && type[i] <= 'Z') ? type[i] + diff : type[i];
	}

	this->type = lower;
}

AMateria::AMateria(AMateria const &cpy)
{
	this->type = cpy.type;
}

AMateria &AMateria::operator=(AMateria const &cpy)
{
	if (&cpy == this) {
		return *this;
	}
	
	this->type = cpy.type;
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
	return ;
}