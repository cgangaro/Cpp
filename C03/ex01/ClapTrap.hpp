#ifndef ClapTrap_HPP
# define ClapTrap_HPP

#include <string>
#include <iostream>

class ClapTrap
{
    public:

        ClapTrap(std::string name);
        ~ClapTrap(void);
		ClapTrap(ClapTrap const &ClapTrap_copy);
		ClapTrap &operator=(ClapTrap const &ClapTrap_copy);
		void	attack(std::string const &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		std::string get_name(void) const;
		int get_hitpoints(void) const;
		int get_energy_points(void) const;
		int get_attack_damage(void) const;
		void set_name(std::string arg);
		void set_hitpoints(int i);
		void set_energy_points(int i);
		void set_attack_damage(int i);

	protected:

		std::string _name;
		int	_hitpoints;
		int	_energy_points;
		int _attack_damage;

};

#endif