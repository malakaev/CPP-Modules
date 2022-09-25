#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap(void);
        ScavTrap(const std::string & name);
        ScavTrap(const ScavTrap& scav);
        ~ScavTrap();
        using ClapTrap::operator=; //Var1 if using inherited from ClapTrap
        void    guardGate(void);
};

#endif
