#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
    public:

        FragTrap(std::string name);
        ~FragTrap(void);
		FragTrap(FragTrap const &FragTrap_copy);
		FragTrap &operator=(FragTrap const &FragTrap_copy);
		void	attack(std::string const &target);
		void	highFivesGuys(void);
};

#endif