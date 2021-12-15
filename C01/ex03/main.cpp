#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	Weapon club = Weapon("gros club");

	HumanA bob("Bob", club);
	bob.attack();
	club.set_type("plus gros club");
	bob.attack();

	HumanB jim("Jim");
	jim.setWeapon(club);
	jim.attack();
	club.set_type("enorme club");
	jim.attack();

	return 0;
}