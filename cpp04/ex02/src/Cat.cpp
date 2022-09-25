#include "Cat.hpp"


Cat::Cat(void): Animal("Cat") {

	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called. Type " << this->_type << " " << this << std::endl;
}


Cat::Cat(const std::string type): Animal(type) {

	_type = type;
	this->_brain = new Brain();
	std::cout << "Cat " << type << " constructor called " << this << std::endl;
}

// shallow copy
Cat::Cat(const Cat & copy): Animal(copy) {

	this->_brain = NULL;
	*this = copy;
	std::cout << "Cat copy constructor called. Type " << this->_type << " " << this << std::endl;
}

// deep copy
// Cat::Cat(const Cat & copy): Animal(copy) {

// 	// this->_brain = NULL;
// 	this->_type = copy._type;
// 	// *this = copy;
// 	this->_brain = new Brain(*copy.getBrain());
// 	// this->_brain = copy._brain; //segfault

// 	// brain(new Brain(*Cat.brain);
// 	std::cout << "Cat copy constructor called. Type " << this->_type << " " << this << std::endl;
// }

// Cat & Cat::operator() (const Cat & copy) {

// 	// this->_brain = NULL;
// 	this->_type = copy._type;
// 	// *this = copy;
// 	this->_brain = new Brain(*copy.getBrain());

// 	// brain(new Brain(*Cat.brain);
// 	std::cout << "Cat copy constructor called. Type " << this->_type << " " << this << std::endl;
// 	return (*this);
// }

//! deep copy
Cat & Cat::operator= (const Cat & rhs) {

		std::cout << "old " << rhs._type << ", adress " << &rhs << ", brain " << rhs._brain << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		std::cout << "Old brain " << this->_type << " " << this->_brain << std::endl;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs.getBrain());
	}
	else
		std::cout << "Cat's " << rhs._type << " self assignment" << std::endl;
	std::cout << "Cat overload operator= called. Type " << this->_type << ", brain " << this->_brain << ", this " << this << std::endl;
	return (*this);
}


//Cat & Cat::operator= (const Cat & rhs) {
//
//	if (this != &rhs)
//		Animal::operator=(rhs);
//	else
//		std::cout << rhs._type << " self assignment" << std::endl;
//	std::cout << "Cat overload operator= called" << std::endl;
//	return (*this);
//}

Cat::~Cat() {

	delete this->_brain;
	std::cout << "Cat destructor called. Type " << this->_type << " " << this << std::endl;
}


std::string Cat::getType() const {

	return (_type);
}


void Cat::makeSound() const {

	std::cout << "*** Cat's MEOW MEOW *** " << "Type " << this->_type << " " << this << std::endl;
}


void Cat::setBrain(Brain & brain) {

	this->_brain = &brain;
}


Brain* Cat::getBrain() const {

	return (this->_brain);
}