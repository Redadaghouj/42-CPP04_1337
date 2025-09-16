#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>

class AAnimal
{
	protected:
		std::string _type;
	public:
		AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal &operator=(const AAnimal &obj);
		virtual ~AAnimal();
		std::string getType() const;
		virtual void makeSound() const = 0;
};

#endif