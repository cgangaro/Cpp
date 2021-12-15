#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name)
{
	this->_weapon = NULL;
    return ;
}

HumanB::~HumanB(void)
{
    return ;
}

void	HumanB::setWeapon(Weapon &arg)
{
	this->_weapon = &arg;
}

void	HumanB::attack(void)
{
	if (this->_weapon == NULL)
		std::cout << this->_name << " attack with his hands" << std::endl;
	else
		std::cout << this->_name << " attack with his " << this->_weapon->get_type() << std::endl;
	return ;
}