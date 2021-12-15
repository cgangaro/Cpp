#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
    public:

        Weapon(std::string arg);
        ~Weapon(void);
        std::string const   &get_type(void);
        void    set_type(std::string arg);

    private:
    
        std::string _type;

};

#endif