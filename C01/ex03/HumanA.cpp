#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& arg): _name(name), _weapon(arg)
{
    return ;
}

HumanA::~HumanA(void)
{
    return ;
}

void	HumanA::attack(void)
{
	std::cout << this->_name << " attack with his " << this->_weapon.get_type() << std::endl;
	return ;
}