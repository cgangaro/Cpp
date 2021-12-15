#include "zombie.hpp"

int main(void)
{
    int n = 5;
    int i = 0;
    std::string name = "Sheldon";

    Zombie* horde = zombiehorde(n, name);
    while (i < n)
    {
        std::cout << "Zombie n°" << i + 1 << " announce: ";
        horde[i].announce();
        i++;
    }
    delete [] horde;
    return 0;
}