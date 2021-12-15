#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap
{
    public:

        ScavTrap(std::string name);
        ~ScavTrap(void);
		ScavTrap(ScavTrap const &ScavTrap_copy);
		ScavTrap &operator=(ScavTrap const &ScavTrap_copy);
		void	guardGate();
		void	attack(std::string const &target);
};

#endif