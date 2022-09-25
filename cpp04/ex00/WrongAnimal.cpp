#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void):_type("Wrong Animal") {

	std::cout << "Wrong Animal Default Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string & type): _type(type) {

	std::cout << "WrongAnimal " << type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & copy) {

	std::cout << "Wrong Animal copy-constructor called" << std::endl;
	*this = copy;
}

WrongAnimal::~WrongAnimal() {

	std::cout << "Wrong Animal destructor called" << std::endl;
}

void    WrongAnimal::makeSound() const {

	std::cout << "xxxxx Wrong Animal's WRONGCRY! xxxxx" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal & wrongAnimal) {

	if (this != &wrongAnimal)
		this->_type = wrongAnimal._type;
	else
		std::cout << wrongAnimal._type << " self assignment" << std::endl;
	std::cout << "Wrong Animal overload operator= called" << std::endl;
	return (*this);
}

std::string WrongAnimal::getType() const {

	return (_type);
}
