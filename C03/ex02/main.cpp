#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	ScavTrap Bob("Bob");
	FragTrap John("John");
	std::cout << std::endl;

	Bob.attack("Cat");
	John.attack("Dog");
	std::cout << std::endl;

	FragTrap Jack = John;
	Jack.attack("Camel");
	Jack.set_name("Jack");
	std::cout << std::endl;

	std::cout << "Bob hitpoints = " << Bob.get_hitpoints() << std::endl;
	std::cout << "Bob energy points = " << Bob.get_energy_points() << std::endl;
	std::cout << "Bob attack damage = " << Bob.get_attack_damage() << std::endl;
	std::cout << std::endl;

	std::cout << "John hitpoints = " << John.get_hitpoints() << std::endl;
	std::cout << "John energy points = " << John.get_energy_points() << std::endl;
	std::cout << "John attack damage = " << John.get_attack_damage() << std::endl;
	std::cout << std::endl;

	Bob.beRepaired(40);
	John.beRepaired(50);
	Jack.beRepaired(60);
	std::cout << std::endl;

	Bob.takeDamage(40);
	John.takeDamage(50);
	Jack.takeDamage(60);
	std::cout << std::endl;

	Bob.guardGate();
	std::cout << std::endl;

	John.highFivesGuys();
	Jack.highFivesGuys();

	return 0;
}