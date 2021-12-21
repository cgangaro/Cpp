#ifndef AMATERIA_H
# define AMATERIA_H

#include <iostream>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;

	public:
		AMateria();
		AMateria(std::string const &type);
		AMateria(AMateria const &cpy);
		virtual ~AMateria();

		AMateria &operator=(AMateria const &cpy);

		std::string const &getType() const; //Returns the materia type
		
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);
};

#endif