#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		std::string _name;
		static const int INVENTORY_SIZE = 4;
		int _inventoryCount;
		AMateria *_inventory[INVENTORY_SIZE];
	public:
		Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		~Character();
		std::string const &getName() const;
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif