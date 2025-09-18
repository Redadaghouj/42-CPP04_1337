#include <iostream>
#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type)
{
	_type = type;
}

AMateria::AMateria(const AMateria &obj)
{
	_type = obj._type;
}

AMateria& AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
	{
		_type = obj._type;
	}
	return (*this);
}

std::string const& AMateria::getType() const
{
	return (_type);
}
