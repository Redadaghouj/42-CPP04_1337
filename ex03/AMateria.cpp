#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : _type(type)
{
	std::cout << "AMateria constructor" << std::endl;
}

AMateria::AMateria(const AMateria &obj) : _type(obj._type)
{
	std::cout << "AMateria copy constructor" << std::endl;
}

AMateria& AMateria::operator=(const AMateria &obj)
{
	if (this != &obj)
	{
		_type = obj._type;
	}
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor" << std::endl;
}

std::string const& AMateria::getType() const
{
	return (_type);
}

void AMateria::use(ICharacter &target)
{
	std::cout << "* uses materia on " << target.getName() << " *" << std::endl;
}
