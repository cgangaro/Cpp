#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap Bob("Bob");
	ClapTrap John("John");

	Bob.attack("Cat");
	John.attack("Dog");

	ClapTrap Jack = Bob;
	Jack.attack("Camel");
	Jack.set_name("Jack");

	Bob.beRepaired(40);
	John.beRepaired(50);
	Jack.beRepaired(60);

	Bob.takeDamage(40);
	John.takeDamage(50);
	Jack.takeDamage(60);

	return 0;
}