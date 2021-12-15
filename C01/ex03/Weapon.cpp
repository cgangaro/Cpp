#include "Weapon.hpp"

Weapon::Weapon(std::string arg)
{
	this->_type = arg;
    return ;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string const    &Weapon::get_type(void)
{
    return this->_type;
}

void		   Weapon::set_type(std::string arg)
{
    this->_type = arg;
}