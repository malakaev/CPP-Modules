#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog & copy);
		Dog & operator=(const Dog & rhs);
		~Dog();

		void makeSound() const;
		std::string getType() const;
};

#endif
