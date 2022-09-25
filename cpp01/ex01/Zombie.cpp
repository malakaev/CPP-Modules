//
// Created by Kamilah Golda on 5/6/22.
//

#include "Zombie.hpp"

Zombie::Zombie(): _name("DefName") {
	static int i;

	std::cout << "Constructor: " << this->_name << " " << i++ << " ok" << std::endl;
}

Zombie::~Zombie() {
	std::cout << "DESTRUCTOR: " << this->_name << " deleted." << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
	this->_name = name;
}
