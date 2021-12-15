#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void): ClapTrap("default_clap_name"), ScavTrap("default"), FragTrap("default")
{
	std::cout << "Default constructor DiamondTrap called with private value _name = " << _name << std::endl;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	this->_name = "default";
	return ;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	std::cout << "Constructor DiamondTrap called with private value _name = " << _name << std::endl;
	this->_hitpoints = FragTrap::_hitpoints;
	this->_energy_points = ScavTrap::_energy_points;
	this->_attack_damage = FragTrap::_attack_damage;
	return ;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called with private value _name = " << _name << std::endl;
	return ;
}

DiamondTrap::DiamondTrap(DiamondTrap const &DiamondTrap_copy) : ClapTrap(DiamondTrap_copy), ScavTrap(DiamondTrap_copy), FragTrap(DiamondTrap_copy)
{
	*this = DiamondTrap_copy;
	return ;
}

DiamondTrap& DiamondTrap::operator=(DiamondTrap const &DiamondTrap_copy)
{
	ClapTrap::_name = DiamondTrap_copy.ClapTrap::_name;
	this->_name = DiamondTrap_copy.get_name();
	this->_hitpoints = DiamondTrap_copy.get_hitpoints();
	this->_energy_points = DiamondTrap_copy.get_energy_points();
	this->_attack_damage = DiamondTrap_copy.get_attack_damage();
	return *this;
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap name = " << this->_name << std::endl;
	std::cout << "ClapTrap name = " << ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}
