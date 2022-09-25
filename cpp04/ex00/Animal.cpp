#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {

	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const std::string & type): _type(type) {

	std::cout << "Animal " << type << " constructor called" << std::endl;
}

Animal::Animal(const Animal & copy) {

	std::cout << "Animal copy-constructor called" << std::endl;
	*this = copy;
}

Animal::~Animal() {

	std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(const Animal & animal) {

	if (this != &animal)
		this->_type = animal._type;
	else
		std::cout << animal._type << " self assignment" << std::endl;
	std::cout << "Animal overload operator= called" << std::endl;
	return (*this);
}

void Animal::makeSound() const {

	std::cout << "*** Animal's cry! ***" << std::endl;
}

std::string    Animal::getType() const {

	return (_type);
}
