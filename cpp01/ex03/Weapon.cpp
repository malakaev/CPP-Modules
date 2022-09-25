//
// Created by Kamilah Golda on 5/11/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {

}

Weapon::~Weapon() {

}

void Weapon::setType(std::string const newType) {
	_type = newType;
}

std::string &Weapon::getType() {
	return _type;
}
