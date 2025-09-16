#include <iostream>
#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	brain = new Brain();
	std::cout << "Default constructor called for [DOG]" << std::endl;
}

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	_type = obj._type;
	brain = new Brain(*obj.brain);
	std::cout << "Copy constructor called for [DOG]" << std::endl;
}

Dog& Dog::operator=(const Dog &obj)
{
	if (this != &obj)
	{
		_type = obj._type;
		delete brain;
		brain = new Brain(*obj.brain);
	}
	return (*this);
}

void Dog::makeSound() const
{
	std::cout << "* Bark! *" << std::endl;
}

Brain* Dog::getBrain() const
{
	return (brain);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Destructor called for [DOG]" << std::endl;
}
