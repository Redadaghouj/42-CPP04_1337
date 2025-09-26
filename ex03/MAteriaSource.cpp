#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "MateriaSource operator =" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{

}

AMateria *createMAteria(const std::string &type)
{
	
}