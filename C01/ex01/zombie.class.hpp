#ifndef ZOMBIE_CLASS_HPP
# define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
    public:

        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setname(std::string arg);

    private:

    std::string name;

};

Zombie* zombiehorde(int n, std::string name);

#endif