#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"
#include "Brain.hpp"

int main(void)
{
// //!	TEST 1. Norm part.

// 	std::cout << std::endl << " === TEST 1. Norm part. === \n" << std::endl;
// 	// const Animal* meta = new Animal();
// 	const Animal* j = new Dog();
// 	const Animal* i = new Cat();

// 	std::cout << j->getType() << " " << std::endl;
// 	std::cout << i->getType() << " " << std::endl;

// 	std::cout << std::endl << " --- Norm sounds --- \n" << std::endl;
// 	i->makeSound();
// 	j->makeSound();
// 	// meta->makeSound();


// 	std::cout << std::endl << " -------- Deleting norm var --------- \n" << std::endl;

// 	// delete meta;
// 	delete j;
// 	delete i;


// //!	TEST 2. Wrong part. Without virtual functions

// 	std::cout << std::endl << " === TEST 2. Wrong part. === \n" << std::endl;
// 	const WrongAnimal* meta2 = new WrongAnimal();
// 	const WrongAnimal* j2 = new WrongCat();

// 	std::cout << "Test Wrong Cat type : ";
// 	std::cout << j2->getType() << " " << std::endl;

// 	std::cout << std::endl << " --- Testing Wrong sounds --- \n" << std::endl;
// 	std::cout << "Test Wrong Cat sound : ";
// 	j2->makeSound();
// 	std::cout << "Test Wrong Animal sound : ";
// 	meta2->makeSound();

// 	std::cout << "\nTest Wrong Cat sound with fix type : ";
// 	((WrongCat *) j2)->makeSound();

// 	std::cout << std::endl << " -------- Deleting wrong var --------- \n" << std::endl;
// 	delete meta2;
// 	delete j2;

//!TEST3 array Dogs Cats
	std::cout << "    Create Dog" << std::endl;
	const Animal* dd = new Dog();
	std::cout << "\n    Create Cat" << std::endl;
	const Animal* cc = new Cat();

	std::cout << "\n         Del Dog";
	delete dd;
	std::cout << "\n         Del Cat";
	delete cc;

	std::cout << "--------------------------------------------------------\n" << std::endl;

	Animal *animals[4];
	std::cout << "----------- Creating array for Dogs and Cats -----------\n" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "i = " << i << std::endl;
		if (i < 2)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}
	std::cout << "\n=========== SOUNDS ============\n" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Sound. i = " << i;
		animals[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << "=================================\n" << std::endl;

	std::cout << std::endl;
	std::cout << "----------- Deleting array -----------\n" << std::endl;

	for (int i = 0; i < 4; i++)
	{
		std::cout << "Del. i = " << i;
		delete animals[i];
		std::cout << std::endl;
	}
	std::cout << "--------------------------------------\n" << std::endl;


	// //! TEST4 check deep copy
	// // Animal a;
	// // std::cout << "--- created Animal a " << &a << std::endl << std::endl;

	// Dog dog1;
	// std::cout << "--- created Dog - dog1 " << &dog1 << std::endl;
	// std::cout << "Type " << dog1.getType() << std::endl << std::endl;

	// Dog dog2(dog1);
	// std::cout << "--- created Dog - dog2 from dog1 " << &dog2 << std::endl << std::endl;

	// std::cout << "-----------\n" << std::endl;
	// std::cout << "assign start\n" << std::endl;
	// dog1 = dog2;
	// std::cout << "--- assigned dog1 = dog2 " << &dog1 << std::endl << std::endl;
	// std::cout << "assign end" << std::endl;
	// std::cout << "-----------\n" << std::endl;


	// //! TEST5

	// Dog * dog1 = new Dog("Pluto");
	// std::cout << "--- created Dog-dog1 " << dog1 << std::endl;
	// std::cout << "Type " << dog1->getType() << std::endl << std::endl;

	// // Dog * dog2 = new Dog(*dog1);
	// // std::cout << "--- created Dog-dog2 from dog1. dog2 adr: " << dog2 << std::endl;
	// // std::cout << "Type " << dog2->getType() << std::endl << std::endl;

	// Dog * dog2 = new Dog("Reks");
	// std::cout << "--- created Dog-dog2. adr: " << dog2 << std::endl;
	// std::cout << "Type " << dog2->getType() << std::endl << std::endl;



	// std::cout << "-----------" << std::endl;
	// std::cout << "assign start\n" << std::endl;
	// *dog1 = *dog2;
	// std::cout << "--- assigned dog1 = dog2 " << dog1 << std::endl << std::endl;
	// std::cout << "assign end" << std::endl;
	// std::cout << "-----------\n" << std::endl;

	// delete dog1;
	// delete dog2;

	return (0);
}

// leaks --atExit -- ./crazy_animals_crying