#include <iostream>
#include "Ice.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Ice::Ice()
{
	std::cout << "Ice default constructor" << std::endl;
}

Ice::Ice(const Ice &obj)
{
	std::cout << "Ice copy constructor" << std::endl;
}

Ice& Ice::operator=(const Ice &obj)
{
	std::cout << "Ice operator =" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice Destructor" << std::endl;
}

AMateria* Ice::clone() const
{

}

void Ice::use(ICharacter &target)
{

}
