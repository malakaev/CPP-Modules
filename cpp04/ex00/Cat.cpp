#include "Cat.hpp"

Cat::Cat(void): Animal("Dog") {

	_type = "Cat";
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const std::string type): Animal(type) {

	_type = type;
	std::cout << "Cat " << type << " constructor called" << std::endl;
}

Cat::Cat(const Cat & copy): Animal(copy) {

	*this = copy;
	std::cout << "Cat copy constructor called" << std::endl;
}

//Cat & Cat::operator= (const Cat & rhs) {
//
//	if (this != &rhs)
//		this->_type = rhs._type;
//	else
//		std::cout << rhs._type << " self assignment" << std::endl;
//	std::cout << "Cat overload operator= called" << std::endl;
//	return (*this);
//}

Cat & Cat::operator= (const Cat & rhs) {

	if (this != &rhs)
		Animal::operator=(rhs);
	else
		std::cout << rhs._type << " self assignment" << std::endl;
	std::cout << "Cat overload operator= called" << std::endl;
	return (*this);
}

Cat::~Cat() {

	std::cout << "Cat destructor called" << std::endl;
}

std::string Cat::getType() const {

	return (_type);
}

void Cat::makeSound() const {

	std::cout << "*** Cat's MEOW MEOW ***" << std::endl;
}
