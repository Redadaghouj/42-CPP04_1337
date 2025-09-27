#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

Character::Character() : _name("")
{
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
}

Character::Character(const Character &obj) : _name(obj._name)
{
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = obj._inventory[i]->clone();
}

Character& Character::operator=(const Character &obj)
{
	std::cout << "Character operator =" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < INVENTORY_SIZE; i++)
		{
			delete _inventory[i];
			if (obj._inventory[i])
				_inventory[i] = obj._inventory[i]->clone();
			else
				_inventory[i] = NULL;
		}
	}
	return (*this);
}

Character::~Character()
{
	std::cout << "Character Destructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		delete _inventory[i];
}

std::string const& Character::getName() const
{
	return (_name);
}

void Character::equip(AMateria *m)
{
	if (m == NULL || _inventoryCount > 3)
		return ;
	_inventory[_inventoryCount] = m;
	_inventoryCount++;
}

void Character::unequip(int idx)
{
	
}

void Character::use(int idx, ICharacter &target)
{
	
}