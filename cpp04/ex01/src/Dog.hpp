#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal {

	public:
		Dog(void);
		Dog(std::string type);
		Dog(const Dog & copy);
		Dog & operator=(const Dog & rhs);
		// Dog & operator() (const Dog & copy);

		~Dog();

		void makeSound() const;
		std::string getType() const;

		Brain * getBrain() const;
		void setBrain(Brain & brain);

	private:
		Brain * _brain;
};

#endif
