//
// Created by Kamilah Golda on 5/6/22.
//

#include "Zombie.hpp"

Zombie::Zombie(std:: string name): _name(name) {}

Zombie::~Zombie() {
	std::cout << "DESTRUCTOR: " << this->_name << " deleted." << std::endl;
}

void Zombie::announce() const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
