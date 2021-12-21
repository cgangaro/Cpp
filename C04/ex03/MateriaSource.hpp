#ifndef MATERIASOURCE_H
#define MATERIASOURCE_H

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &cpy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const &cpy);

		void learnMateria(AMateria *);
		AMateria *createMateria(std::string const &type);

	private:
		AMateria *_mat[4];
};

#endif