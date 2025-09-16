#include <iostream>
#include "Animal.hpp"

AAnimal::AAnimal() : _type("Animal")
{
	std::cout << "Default constructor called for [ANIMAL]" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj) : _type(obj._type)
{
	std::cout << "Copy constructor called for [ANIMAL]" << std::endl;
}

AAnimal& AAnimal::operator=(const AAnimal &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

std::string AAnimal::getType() const
{
	return (_type);
}

AAnimal::~AAnimal()
{
	std::cout << "Destructor called for [ANIMAL]" << std::endl;
}
