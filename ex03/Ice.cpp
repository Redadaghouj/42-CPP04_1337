#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &obj) : AMateria(obj)
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
	std::cout << "Ice operator =" << std::endl;
	if (this != &obj)
		_type = this->_type;
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destructor" << std::endl;
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}