#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

	public:
		Cat(void);
		Cat(std::string type);
		Cat(const Cat & copy);
		Cat & operator=(const Cat & rhs);
		~Cat();

		void makeSound() const;
		std::string getType() const;
};

#endif
