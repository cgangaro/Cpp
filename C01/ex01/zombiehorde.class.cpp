#include "zombie.class.hpp"

Zombie* zombiehorde(int n, std::string name)
{
    int i;
    Zombie* horde = new Zombie[n];
    i = 0;
    while (i < n)
    {
        horde[i].setname(name);
        i++;
    }
    return horde;
}