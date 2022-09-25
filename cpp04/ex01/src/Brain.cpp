//
// Created by Kamilah Golda on 5/27/22.
//

#include "Brain.hpp"

Brain::Brain() {

	std::cout << "Brain default constructor called " << this << std::endl;
}


Brain::Brain(const std::string type) {

	std::cout << "Brain " << type << " constructor called. " << this << std::endl;
}


Brain::Brain(const Brain & copy) {

	*this = copy;
	std::cout << "Brain copy constructor called for " << this << std::endl;
}

// deep copy
Brain & Brain::operator=(const Brain & rhs) {

	if (this != &rhs) {
		for (int i = 0; i < 100; i++)
			this->ideas[i] = rhs.ideas[i];
	}
	else
		std::cout << "Brain's " << rhs.ideas << " self assignment" << std::endl;
	std::cout << "Brain overload operator= called " << this << std::endl;
	return (*this);
}


Brain::~Brain() {

	std::cout << "\nBrain destructor called for " << this << std::endl;
}