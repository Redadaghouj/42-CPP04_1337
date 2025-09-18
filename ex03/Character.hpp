#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	private:
		AMateria *inventory[4];
	public:
		Character();
		Character(const Character &obj);
		Character &operator=(const Character &obj);
		~Character();
		std::string const &getName();
		void equip(AMateria *m);
		void unequip(int idx);
		void use(int idx, ICharacter &target);
};

#endif