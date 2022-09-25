#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << std::endl << " === TEST 1. Norm part. === \n" << std::endl;
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	std::cout << std::endl << " --- Norm sounds --- \n" << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl << " -------- Deleting norm var --------- \n" << std::endl;

	delete meta;
	delete j;
	delete i;

//	without virtual functions
	std::cout << std::endl << " === TEST 2. Wrong part. === \n" << std::endl;
	const WrongAnimal* meta2 = new WrongAnimal();
	const WrongAnimal* j2 = new WrongCat();

	std::cout << "Test Wrong Cat type : ";
	std::cout << j2->getType() << " " << std::endl;

	std::cout << std::endl << " --- Testing Wrong sounds --- \n" << std::endl;
	std::cout << "Test Wrong Cat sound : ";
	j2->makeSound();
	std::cout << "Test Wrong Animal sound : ";
	meta2->makeSound();

	std::cout << "\nTest Wrong Cat sound with fix type : ";
	((WrongCat *) j2)->makeSound();

	std::cout << std::endl << " -------- Deleting wrong var --------- \n" << std::endl;
	delete meta2;
	delete j2;
	return (0);
}
