#include <iostream>
#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource()
{
	std::cout << "MateriaSource default constructor" << std::endl;
	_materiaCount = 0;
	for (int i = 0; i < MATERIA_SIZE; i++)
		_materia[i] = NULL; 
}

MateriaSource::MateriaSource(const MateriaSource &obj) : _materiaCount(obj._materiaCount)
{
	std::cout << "MateriaSource copy constructor" << std::endl;
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (obj._materia[i])
			_materia[i] = obj._materia[i]->clone();
		else
			_materia[i] = NULL;
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource &obj)
{
	std::cout << "MateriaSource operator =" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < MATERIA_SIZE; i++)
		{
			delete _materia[i];
			if (obj._materia[i])
				_materia[i] = obj._materia[i]->clone();
			else
				_materia[i] = NULL;
		}
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
	std::cout << "MateriaSource Destructor" << std::endl;
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (_materia[i] != NULL)
		{
			delete _materia[i];
			_materia[i] = NULL;
		}
	}
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (m == NULL || _materiaCount >= MATERIA_SIZE)
		return ;
	_materia[_materiaCount] = m;
	_materiaCount++;
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < MATERIA_SIZE; i++)
	{
		if (_materia[i] && _materia[i]->getType() == type)
			return (_materia[i]->clone());
	}
	return (NULL);
}
