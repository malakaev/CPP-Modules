//
// Created by Kamilah Golda on 5/6/22.
//

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

public:

	Zombie();
	~Zombie();

	void	announce() const;
	void	setName(std::string name);

private:

	std::string _name;

};

Zombie* zombieHorde(int N, std::string name);

#endif
