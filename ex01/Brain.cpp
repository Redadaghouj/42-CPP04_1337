#include <iostream>
#include <string>
#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = "Idea";
	std::cout << "Default constructor called for [BRAIN]" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Copy constructor called for [BRAIN]" << std::endl;
	for (int i = 0; i < MAX_IDEAS; i++)
		_ideas[i] = obj._ideas[i];
}

Brain& Brain::operator=(const Brain &obj)
{
	if (this != &obj)
	{
		for (int i = 0; i < MAX_IDEAS; i++)
			_ideas[i] = obj._ideas[i];
	}
	return (*this);
}

std::string Brain::getIdea(int index) const
{
	return (_ideas[index]);
}

void Brain::setIdea(const std::string &idea, int index)
{
	_ideas[index] = idea;
}

Brain::~Brain()
{
	std::cout << "Destructor called for [BRAIN]" << std::endl;
}