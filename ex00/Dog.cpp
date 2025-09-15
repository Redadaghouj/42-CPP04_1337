#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	std::cout << "Default constructor called for [DOG]" << std::endl;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	_type = obj._type;
	std::cout << "Copy constructor called for [DOG]" << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "* Bark! *" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor called for [DOG]" << std::endl;
}
