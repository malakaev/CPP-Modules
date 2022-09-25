#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	_type = "Dog";
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const std::string type): Animal(type) {

	_type = type;
	std::cout << "Dog " << type << " constructor called" << std::endl;
}

Dog::Dog(const Dog & copy): Animal(copy) {

	*this = copy;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog & Dog::operator= (const Dog & rhs) {

	if (this != &rhs)
		this->_type = rhs._type;
	else
		std::cout << rhs._type << " self assignment" << std::endl;
	std::cout << "Dog overload operator= called" << std::endl;
	return (*this);
}

//Dog & Dog::operator= (const Dog & rhs) {
//
//	if (this != &rhs)
//		Animal::operator=(rhs);
//	else
//		std::cout << rhs._type << " self assignment" << std::endl;
//	std::cout << "Dog overload operator= called" << std::endl;
//	return (*this);
//}

Dog::~Dog() {

	std::cout << "Dog destructor called" << std::endl;
}

std::string Dog::getType() const {

	return (_type);
}

void Dog::makeSound() const {

	std::cout << "*** Dog's GAV GAV ***" << std::endl;
}
