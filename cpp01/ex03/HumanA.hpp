//
// Created by Kamilah Golda on 5/11/22.
//

#ifndef EX03_HUMANA_HPP
#define EX03_HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanA {

public:

	HumanA(std::string name, Weapon& weapon);
	~HumanA();

	void attack() const;

private:

	std::string	_name;
	Weapon&		_weapon;
};


#endif
