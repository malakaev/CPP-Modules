#include "Dog.hpp"

Dog::Dog(void): Animal("Dog") {

	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called. Type " << this->_type << " " << this << std::endl;
}


Dog::Dog(const std::string type): Animal(type) {

	_type = type;
	this->_brain = new Brain();
	std::cout << "Dog " << type << " constructor called " << this << std::endl;
}


// shallow copy
Dog::Dog(const Dog & copy): Animal(copy) {

	this->_brain = NULL;
	*this = copy;
	std::cout << "Dog copy constructor called. Type " << this->_type << " " << this << std::endl;
}

// deep copy
// Dog::Dog(const Dog & copy): Animal(copy) {

// 	// this->_brain = NULL;
// 	this->_type = copy._type;
// 	// *this = copy;
// 	this->_brain = new Brain(*copy.getBrain());
// 	// this->_brain = copy._brain; //segfault

// 	// brain(new Brain(*dog.brain);
// 	std::cout << "Dog copy constructor called. Type " << this->_type << " " << this << std::endl;
// }

// Dog & Dog::operator() (const Dog & copy) {

// 	// this->_brain = NULL;
// 	this->_type = copy._type;
// 	// *this = copy;
// 	this->_brain = new Brain(*copy.getBrain());

// 	// brain(new Brain(*dog.brain);
// 	std::cout << "Dog copy constructor called. Type " << this->_type << " " << this << std::endl;
// 	return (*this);
// }


//! deep copy
Dog & Dog::operator= (const Dog & rhs) {

		std::cout << "old " << rhs._type << ", adress " << &rhs << ", brain " << rhs._brain << std::endl;
	if (this != &rhs) {
		this->_type = rhs._type;
		std::cout << "Old brain " << this->_type << " " << this->_brain << std::endl;
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*rhs.getBrain());
	}
	else
		std::cout << "Dog's " << rhs._type << " self assignment" << std::endl;
	std::cout << "Dog overload operator= called. Type " << this->_type << ", brain " << this->_brain << ", this " << this << std::endl;
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

	delete this->_brain;
	std::cout << "Dog destructor called. Type " << this->_type << " " << this << std::endl;
}


std::string Dog::getType() const {

	return (_type);
}


void Dog::makeSound() const {

	std::cout << "*** Dog's GAV GAV *** " << "Type " << this->_type << " " << this << std::endl;
}


void Dog::setBrain(Brain & brain) {

	this->_brain = &brain;
}


Brain* Dog::getBrain() const {

	return (this->_brain);
}