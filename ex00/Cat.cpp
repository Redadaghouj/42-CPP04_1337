#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	std::cout << "Default constructor called for [CAT]" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	_type = obj._type;
	std::cout << "Copy constructor called for [CAT]" << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "* Meow! *" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor called for [CAT]" << std::endl;
}
