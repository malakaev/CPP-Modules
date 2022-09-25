#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <iomanip>


class ClapTrap {

	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & clapTrap);
		ClapTrap & operator=(const ClapTrap & clapTrap);
		~ClapTrap();

		void            attack(const std::string & target);
		void            takeDamage(unsigned int amount);
		void            beRepaired(unsigned int amount);
		int             getEnergypoints(void) const;
		int             getHitpoints(void) const;
		std::string     getName(void) const;
		int             getAttackDamage(void) const;
		void            setName(std::string name);
		void            setHitpoints(unsigned int points);
		void            setEnergypoints(unsigned int points);
		void            setAttackDamage(unsigned int damage);

		void printStatus(void) const;

	protected:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;

//	private:
//		std::string _name;
//		unsigned int _hitPoints;
//		unsigned int _energyPoints;
//		unsigned int _attackDamage;
};

#endif
