//
// Created by Kamilah Golda on 5/6/22.
//

#include "Zombie.hpp"
#include <cstdlib>
#include <sstream>

Zombie *zombieHorde(int N, std::string name) {
	Zombie*				zombies;
	int					i;
	std::string			num;
	std::stringstream	ss;

	zombies = new Zombie[N];
	for (i = 0; i < N; i++){
		ss.str(std::string()); // instead ss.clear();
		ss << i;
		num = ss.str();
		zombies[i].setName(name + "_" + num);
	}
	return zombies;
}

