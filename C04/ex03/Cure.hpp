#ifndef CURE_H
# define CURE_H

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{

	public:
		Cure();
		Cure(Cure const &cpy);
		virtual ~Cure();

		Cure &operator=(Cure const &cpy);

		AMateria *clone() const;
		void	use(ICharacter &target);
};

#endif