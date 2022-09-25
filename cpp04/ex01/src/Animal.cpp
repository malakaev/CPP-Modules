#include "Animal.hpp"

Animal::Animal(void): _type("Animal") {

	std::cout << "Animal default constructor called. Type " << _type << ": " << this << std::endl;
}

Animal::Animal(const std::string & type): _type(type) {

	std::cout << "Animal " << type << " constructor called: " << this << std::endl;
}

Animal::Animal(const Animal & copy) {

	std::cout << "1* Animal copy-constructor called " << this->_type << " adr: " << this << std::endl;
	*this = copy;
	std::cout << "2* Animal copy-constructor called " << this->_type << " adr: " << this << std::endl;
}

Animal::~Animal() {

	std::cout << "Animal destructor called " << this->_type << " adr: " << this << std::endl;
}

Animal & Animal::operator=(const Animal & animal) {

	if (this != &animal)
		this->_type = animal._type;
	else
		std::cout << animal._type << " self assignment" << std::endl;

	std::cout << "Animal overload operator= called " << this << std::endl;
	std::cout << "Animal type " << animal._type << std::endl;
	std::cout << "This type " << this->_type << std::endl;

	return (*this);
}

void Animal::makeSound() const {

	std::cout << "*** Animal's cry! ***    Type: " << this->_type << " adr: " << this << std::endl;
}

std::string Animal::getType() const {

	return (_type);
}
