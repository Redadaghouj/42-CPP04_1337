#include <iostream>
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main()
{
	std::cout << "=== Basic test from instructions ===" << std::endl;
	IMateriaSource *src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter *me = new Character("me");
	AMateria *tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter *bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);

	std::cout << "\n=== Equip & Unequip edge cases ===" << std::endl;
	Character *alice = new Character("Alice");

	alice->equip(src->createMateria("ice"));
	alice->equip(src->createMateria("cure"));
	alice->equip(src->createMateria("ice"));
	alice->equip(src->createMateria("cure"));
	alice->equip(src->createMateria("ice"));

	alice->unequip(1);
	alice->equip(src->createMateria("cure"));
	alice->unequip(5);
	alice->unequip(1);

	std::cout << "\n=== Destructor cleanup ===" << std::endl;
	delete bob;
	delete me;
	delete src;
	delete alice;

	return (0);
}
