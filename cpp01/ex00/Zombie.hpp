//
// Created by Kamilah Golda on 5/6/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:

	Zombie(std:: string name);
	~Zombie();

	void	announce() const;

private:

	std::string _name;

};

void	randomChump(std::string name);

Zombie * newZombie(std::string name);

#endif
