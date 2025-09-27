#include <iostream>
#include "Cure.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Cure::Cure()
{
	_type = "cure";
	std::cout << "Cure default constructor" << std::endl;
}

Cure::Cure(const Cure &obj)
{
	std::cout << "Cure copy constructor" << std::endl;
	this->_type = _type;
}

Cure& Cure::operator=(const Cure &obj)
{
	std::cout << "Cure operator =" << std::endl;
	if (this != &obj)
		this->_type = _type;
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Cure Destructor" << std::endl;
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}