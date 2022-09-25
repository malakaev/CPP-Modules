#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

	public:
		FragTrap(void);
		FragTrap(const std::string & name);
		FragTrap(const FragTrap & scav);
		~FragTrap();
		using ClapTrap::operator=; //Var1 if using inherited from ClapTrap
		void highFivesGuys(void);
};

#endif
