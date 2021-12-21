#include <iostream>
#include "Character.hpp"

Character::Character(std::string name)
{
	this->_name = name;

	for (int i = 0; i < 4; i++) {
		this->_mat[i] = NULL;
	}
}

Character::Character(Character const &cpy)
{
	this->_name = cpy._name;

	for (int i = 0; i < 4; i++) {
		if (cpy._mat[i])
			this->_mat[i] = cpy._mat[i]->clone();
		else
			this->_mat[i] = NULL;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++) {
		if (this->_mat[i]) {
			delete this->_mat[i];
			this->_mat[i] = NULL;
		}
	}
}

Character &Character::operator=(Character const &cpy)
{
	this->_name = cpy._name;

	for (int i = 0; i < 4; i++) {
		if (this->_mat[i])
			delete this->_mat[i];
	}

	for (int i = 0; i < 4; i++) {
		if (cpy._mat[i])
			this->_mat[i] = cpy._mat[i]->clone();
		else
			this->_mat[i] = NULL;
	}

	return *this;
}

std::string const &Character::getName() const
{
	return this->_name;
}

void	Character::setName(std::string name)
{
	this->_name = name;
}

void	Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++) {
		if (!this->_mat[i] && m) {
			this->_mat[i] = m;
			return ;
		}
	}
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4) {
		this->_mat[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (this->_mat[idx])
		this->_mat[idx]->use(target);
}