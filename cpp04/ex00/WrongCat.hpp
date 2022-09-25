#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
	WrongCat(void);
	WrongCat(std::string type);
	WrongCat(const WrongCat & copy);
	WrongCat & operator=(const WrongCat & rhs);
	~WrongCat();

	void makeSound() const;
	std::string getType() const;
};

#endif
