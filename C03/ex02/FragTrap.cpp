#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor FragTrap called with private value _name = " << _name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called with private value _name = " << _name << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const &FragTrap_copy) : ClapTrap(FragTrap_copy)
{
	*this = FragTrap_copy;
	return ;
}

FragTrap& FragTrap::operator=(FragTrap const &FragTrap_copy)
{
	this->_name = FragTrap_copy.get_name();
	this->_hitpoints = FragTrap_copy.get_hitpoints();
	this->_energy_points = FragTrap_copy.get_energy_points();
	this->_attack_damage = FragTrap_copy.get_attack_damage();
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << ": High five guys !!" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}
