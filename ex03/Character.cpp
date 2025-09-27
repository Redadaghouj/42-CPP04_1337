#include <iostream>
#include "Character.hpp"
#include "AMateria.hpp"
#include "ICharacter.hpp"

DroppedList* Character::list = NULL;
int Character::instanceCount = 0;

Character::Character() : _name("")
{
	std::cout << "Character default constructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = NULL;
	instanceCount++;
}

Character::Character(const Character &obj) : _name(obj._name)
{
	std::cout << "Character copy constructor" << std::endl;
	for (int i = 0; i < INVENTORY_SIZE; i++)
		_inventory[i] = obj._inventory[i]->clone();
	instanceCount++;
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
	instanceCount--;
	if (instanceCount == 0)
		_clearAllMaterias();
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
	_addMateria(_inventory[idx]);
	_inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if ((idx > 0 && idx < INVENTORY_SIZE) && _inventory[idx])
	{
		_inventory[idx]->use(target);
		std::cout << "* poisons " << target.getName() << "! *" << std::endl;
	}
	else
		std::cout << "* Wrong index! you cannot use this materia *" << std::endl;
}

void Character::_addMateria(AMateria *materia)
{
	DroppedList *node = new DroppedList;
	node->materia = materia;
	node->next = list;
	list = node;
}

void Character::_clearAllMaterias()
{
	while (list)
	{
		delete list->materia;
		list = list->next;
	}
}
