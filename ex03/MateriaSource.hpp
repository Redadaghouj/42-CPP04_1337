#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <string>
#include "AMateria.hpp"
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &obj);
		~MateriaSource();
		void learnMateria(AMateria *m);
		AMateria *createMateria(const std::string &type);
};

#endif