#ifndef ICE_H
# define ICE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{

	public:
		Ice();
		Ice(Ice const &cpy);
		virtual ~Ice();

		Ice &operator=(Ice const &cpy);

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif