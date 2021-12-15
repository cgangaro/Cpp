#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
    public:

        HumanB(std::string name);
        ~HumanB(void);
		void	setWeapon(Weapon &arg);
		void	attack(void);

    private:
    
        std::string _name;
		Weapon *_weapon;

};

#endif