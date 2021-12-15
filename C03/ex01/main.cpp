#include "ScavTrap.hpp"

int	main(void)
{
	ScavTrap Bob("Bob");
	ScavTrap John("John");

	Bob.attack("Cat");
	John.attack("Dog");

	ScavTrap Jack = Bob;
	Jack.attack("Camel");
	Jack.set_name("Jack");

	std::cout << "Bob hitpoints = " << Bob.get_hitpoints() << std::endl;
	std::cout << "John ernergy points = " << John.get_energy_points() << std::endl;
	std::cout << "Jack attack damage = " << Jack.get_attack_damage() << std::endl;
	Bob.beRepaired(40);
	John.beRepaired(50);
	Jack.beRepaired(60);

	Bob.takeDamage(40);
	John.takeDamage(50);
	Jack.takeDamage(60);

	Bob.guardGate();
	John.guardGate();
	Jack.guardGate();

	return 0;
}