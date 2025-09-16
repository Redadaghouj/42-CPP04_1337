#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

const int MAX_ANIMALS = 10;

void testAnimalArray()
{
	std::cout << "\n=== Testing Animal Array ===\n\n";

	Animal* animals[MAX_ANIMALS];

	for (int i = 0; i < MAX_ANIMALS; i++)
	{
		if (i < MAX_ANIMALS / 2)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}

	std::cout << std::string(50, '-') << std::endl;

	for (int i = 0; i < MAX_ANIMALS; i++)
		delete animals[i];
}

void testDogCopy()
{
	std::cout << "\n=== Testing Dog Deep Copy ===\n\n";

	Dog dog;
	dog.getBrain()->setIdea("++[New DOG idea]++", 0);

	Dog copyDog(dog); // copy constructor
	std::cout << "Copied Dog idea[0]: " 
			<< copyDog.getBrain()->getIdea(0) 
			<< std::endl;
}

int main()
{
	testAnimalArray();
	testDogCopy();

	std::cout << "\n=== End of Tests ===\n";
	return (0);
}
