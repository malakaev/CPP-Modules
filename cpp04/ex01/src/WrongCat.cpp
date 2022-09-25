#include "WrongCat.hpp"

WrongCat::WrongCat(void) {

	_type = "WrongCat";
	std::cout << "WrongCat default constructor called " << this << std::endl;
}

WrongCat::WrongCat(const std::string type):WrongAnimal() {

	_type = type;
	std::cout << "WrongCat " << type << " constructor called " << this << std::endl;
}

WrongCat::WrongCat(const WrongCat & copy):WrongAnimal() {

	*this = copy;
	std::cout << "WrongCat copy constructor called " << this << std::endl;
}

//WrongCat & WrongCat::operator= (const WrongCat & rhs) {
//
//	if (this != &rhs)
//		this->_type = rhs._type;
//	else
//		std::cout << rhs._type << " self assignment" << std::endl;
//	std::cout << "WrongCat overload operator= called" << std::endl;
//	return (*this);
//}

WrongCat & WrongCat::operator= (const WrongCat & rhs) {

	if (this != &rhs)
		WrongAnimal::operator=(rhs);
	else
		std::cout << rhs._type << " self assignment" << std::endl;
	std::cout << "WrongCat overload operator= called " << this << std::endl;
	return (*this);
}

WrongCat::~WrongCat() {

	std::cout << "WrongCat destructor called " << this << std::endl;
}

std::string WrongCat::getType() const {

	return (_type);
}

void WrongCat::makeSound() const {

	std::cout << "xxx WrongCat's WRONGMEOW xxx " << this << std::endl;
}
