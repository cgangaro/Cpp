#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Zombie
{
    public:

        Zombie(std::string arg);
        ~Zombie(void);
        void    announce(void);

    private:

    std::string name;

};

Zombie* newzombie(std::string name);
void    randomChump(std::string name);

#endif