#include <iostream>
#include "Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	brain = new Brain();
	std::cout << "Default constructor called for [CAT]" << std::endl;
}

Cat::Cat(const Cat &obj) : AAnimal(obj)
{
	_type = obj._type;
	brain = new Brain(*obj.brain);
	std::cout << "Copy constructor called for [CAT]" << std::endl;
}

Cat& Cat::operator=(const Cat &obj)
{
	if (this != &obj)
	{
		_type = obj._type;
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

void Cat::makeSound() const
{
	std::cout << "* Meow! *" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Destructor called for [CAT]" << std::endl;
}
