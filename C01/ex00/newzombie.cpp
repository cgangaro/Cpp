#include "zombie.hpp"

Zombie* newzombie(std::string name)
{
    Zombie* ret = new Zombie(name);
    return ret;
}