#ifndef DiamondTrap_HPP
# define DiamondTrap_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
    public:

		DiamondTrap(void);
        DiamondTrap(std::string name);
        ~DiamondTrap(void);
		DiamondTrap(DiamondTrap const &DiamondTrap_copy);
		DiamondTrap &operator=(DiamondTrap const &DiamondTrap_copy);
		void	attack(std::string const &target);
		void	whoAmI(void);

	private:

		std::string _name;
};

#endif