//
// Created by Kamilah Golda on 5/11/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) , _weapon(nullptr) {

}

HumanB::~HumanB() {

}

void HumanB::setWeapon(Weapon& newWeapon) {
	_weapon = &newWeapon;
}

void HumanB::attack() const {
	if (_weapon) {
		std::cout << _name << " attacks with their " << _weapon->getType() << std::endl;
	}
}
