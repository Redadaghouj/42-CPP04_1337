#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure copy constructor" << std::endl;
}

Cure& Cure::operator=(const Cure &obj)
{
	std::cout << "Cure operator =" << std::endl;
	if (this != &obj)
	{
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

AMateria* Cure::clone() const
{

}

void Cure::use(ICharacter &target)
{

}