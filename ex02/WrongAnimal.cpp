#include <iostream>
#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
	std::cout << "Default constructor called for [WrongAnimal]" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj)
{
	_type = obj._type;
	std::cout << "Copy constructor called for [WrongAnimal]" << std::endl;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (_type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "* generic WrongAnimal sound *" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor called for [WrongAnimal]" << std::endl;
}
