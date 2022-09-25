#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal {

	protected:
		std::string _type;

	public:
		Animal(void);
		Animal(const std::string & type);
		Animal(const Animal & copy);
		Animal & operator=(const Animal & animal);
		virtual ~Animal();

		std::string getType() const;
		virtual void makeSound() const;

};

#endif
