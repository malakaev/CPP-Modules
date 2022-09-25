//
// Created by Kamilah Golda on 5/11/22.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP


#include <iostream>

class Weapon {

public:

	Weapon(std::string type);
	~Weapon();

	void setType(std::string newType);
	std::string& getType();

private:

	std::string _type;
};


#endif
