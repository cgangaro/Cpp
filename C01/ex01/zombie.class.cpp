#include "zombie.class.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " : Destroy" << std::endl;
    return ;
}

void    Zombie::announce(void)
{
    std::cout << this->name << " BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}

void    Zombie::setname(std::string arg)
{
    this->name = arg;
    return ;
}