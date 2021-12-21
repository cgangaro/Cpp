#ifndef CHARACTER_H
#define CHARACTER_H

#include <iostream>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const &cpy);
		virtual ~Character();

		Character &operator=(Character const &cpy);

		std::string const &getName() const;
		void setName(std::string name);
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);

	private:
		std::string _name;
		AMateria	*_mat[4];

};

#endif