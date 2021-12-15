#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "Constructor ScavTrap called with private value _name = " << _name << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called with private value _name = " << _name << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &ScavTrap_copy) : ClapTrap(ScavTrap_copy)
{
	*this = ScavTrap_copy;
	return ;
}

ScavTrap& ScavTrap::operator=(ScavTrap const &ScavTrap_copy)
{
	this->_name = ScavTrap_copy.get_name();
	this->_hitpoints = ScavTrap_copy.get_hitpoints();
	this->_energy_points = ScavTrap_copy.get_energy_points();
	this->_attack_damage = ScavTrap_copy.get_attack_damage();
	return *this;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " entered in Gate keeper mode"<< std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

