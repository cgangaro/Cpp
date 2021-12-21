#include <iostream>
#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		this->_mat[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &cpy)
{
	for (int i = 0; i < 4; i++) {
		if (cpy._mat[i])
			this->_mat[i] = cpy._mat[i];
		else
			this->_mat[i] = 0;
	}
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++) {
		if (this->_mat[i])
			delete this->_mat[i];
	}
}

MateriaSource &MateriaSource::operator=(MateriaSource const &cpy)
{
	if (&cpy == this) {
		return *this;
	}

	for (int i = 0; i < 4; i++) {
		if (this->_mat[i])
			delete this->_mat[i];
	}

	for (int i = 0; i < 4; i++) {
		if (cpy._mat[i])
			this->_mat[i] = cpy._mat[i];
		else
			this->_mat[i] = 0;
	}

	return *this;
}

void MateriaSource::learnMateria(AMateria *m)
{
	for (int i = 0; i < 4; i++) {
		if (!this->_mat[i] && m) {
			this->_mat[i] = m;
			return ;
		}
	}
}

AMateria	*MateriaSource::createMateria(std::string const &type)
{
	for (int i = 0; i < 4; i++) {
		if  (this->_mat[i] && this->_mat[i]->getType() == type) {
			AMateria	*cpy = this->_mat[i]->clone();
			return cpy;
		}
	}
	std::cout << "ERROR: " << type << " is unknown." << std::endl;
	return NULL;
}