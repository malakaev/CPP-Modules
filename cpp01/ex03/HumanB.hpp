//
// Created by Kamilah Golda on 5/11/22.
//

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB {

public:

	HumanB(std::string name);
	~HumanB();

	void setWeapon(Weapon& newWeapon);
	void attack() const;

private:

	std::string	_name;
	Weapon*		_weapon;
};

#endif
