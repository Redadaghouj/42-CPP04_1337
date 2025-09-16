#include <iostream>
#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat()
{
	_type = "WrongCat";
	std::cout << "Default constructor called for [WrongCat]" << std::endl;
}

WrongCat::WrongCat(const WrongCat &obj) : WrongAnimal(obj)
{
	_type = obj._type;
	std::cout << "Copy constructor called for [WrongCat]" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &obj)
{
	if (this != &obj)
		_type = obj._type;
	return (*this);
}

void WrongCat::makeSound() const
{
	std::cout << "* WrongCat sound *" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor called for [WrongCat]" << std::endl;
}
