#include <iostream>
#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	std::cout << "Default constructor called for [ANIMAL]" << std::endl;
}

Animal::Animal(const Animal &obj) : _type(obj._type)
{
	std::cout << "Copy constructor called for [ANIMAL]" << std::endl;
}

Animal& Animal::operator=(const Animal &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

std::string Animal::getType() const
{
	return (_type);
}

void Animal::makeSound() const
{
	std::cout << "* generic animal sound *" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Destructor called for [ANIMAL]" << std::endl;
}
