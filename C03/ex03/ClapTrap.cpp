#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	this->_name = name;
	this->_hitpoints = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Constructor called with private value _name = " << _name << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor called with private value _name = " << _name << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &ClapTrap_copy)
{
	*this = ClapTrap_copy;
	return ;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->_name << " repaired " << amount << " points of energy!" << std::endl;
}

ClapTrap& ClapTrap::operator=(ClapTrap const &ClapTrap_copy)
{
	this->_name = ClapTrap_copy.get_name();
	this->_hitpoints = ClapTrap_copy.get_hitpoints();
	this->_energy_points = ClapTrap_copy.get_energy_points();
	this->_attack_damage = ClapTrap_copy.get_attack_damage();
	return *this;
}

std::string ClapTrap::get_name(void) const
{
	return (this->_name);
}

void ClapTrap::set_name(std::string arg)
{
	this->_name = arg;
	return ;
}

int ClapTrap::get_hitpoints(void) const
{
	return (this->_hitpoints);
}

void ClapTrap::set_hitpoints(int i)
{
	this->_hitpoints = i;
	return ;
}

int ClapTrap::get_energy_points(void) const
{
	return (this->_energy_points);
}

void ClapTrap::set_energy_points(int i)
{
	this->_energy_points = i;
	return ;
}

int ClapTrap::get_attack_damage(void) const
{
	return (this->_attack_damage);
}

void ClapTrap::set_attack_damage(int i)
{
	this->_attack_damage = i;
	return ;
}

