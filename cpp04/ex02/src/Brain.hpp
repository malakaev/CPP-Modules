//
// Created by Kamilah Golda on 5/27/22.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

protected:
	std::string ideas[100];

public:
	Brain();
	Brain(std::string type);
	Brain(const Brain & copy);
	Brain & operator=(const Brain & rhs);
	~Brain();

};


#endif
