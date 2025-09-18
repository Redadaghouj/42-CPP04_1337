#ifndef MATERIA_SOURCE_HPP
# define MATERIA_SOURCE_HPP

#include <string>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &obj);
		MateriaSource &operator=(const MateriaSource &obj);
		~MateriaSource();
};

#endif