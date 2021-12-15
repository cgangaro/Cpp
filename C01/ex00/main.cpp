#include "zombie.hpp"

int main(void)
{
    Zombie Edge("Edge");

    Edge.announce();

    Zombie* LaFeve = newzombie("LaFeve");

    LaFeve->announce();

    randomChump("BenjaminEpps");
    
    delete(LaFeve);
    return 0;
}