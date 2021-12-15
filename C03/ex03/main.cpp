#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap Bob("Bob");
	std::cout << std::endl;

	std::cout << "Bob hitpoints = " << Bob.get_hitpoints() << std::endl;
	std::cout << "Bob energy points = " << Bob.get_energy_points() << std::endl;
	std::cout << "Bob attack damage = " << Bob.get_attack_damage() << std::endl;
	std::cout << std::endl;

	Bob.attack("Camel");
	std::cout << std::endl;

	Bob.guardGate();
	std::cout << std::endl;

	Bob.highFivesGuys();
	std::cout << std::endl;

	Bob.whoAmI();
	std::cout << std::endl;

	return 0;
}