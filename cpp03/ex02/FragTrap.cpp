#include "FragTrap.hpp"

//Default constructor var1
//FragTrap::FragTrap(void): ClapTrap::ClapTrap() {
//
//    _name = "Default_FragTrap_Name";
//    _hitPoints = 100;
//    _energyPoints = 100;
//    _attackDamage = 30;
//    std::cout << "FragTrap Default constructor called" << std::endl;
//}

//Default constructor var2
FragTrap::FragTrap(void) : ClapTrap() {

	setName("Def_FragTrap_Name");
	setHitpoints(100);
	setEnergypoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap Default constructor called" << std::endl;
	this->printStatus();
}

FragTrap::FragTrap(const std::string & name) : ClapTrap(name) {

	setHitpoints(100);
	setEnergypoints(100);
	setAttackDamage(30);
	std::cout << "FragTrap constructor " << name << " called" << std::endl;
	this->printStatus();
}

// Copy constructor var 1
//FragTrap::FragTrap(std::string name): ClapTrap::ClapTrap(name) {
//
//    _name = name;
//    _hitPoints = 100;
//    _energyPoints = 100;
//    _attackDamage = 30;
//    std::cout << "FragTrap copy constructor " << _name <<" was called" << std::endl;
//}

// Copy constructor var 2 using copy constructor inherited from ClapTrap
FragTrap::FragTrap(const FragTrap & fragTrap) : ClapTrap::ClapTrap(fragTrap) {

//    *this = fragTrap;
	std::cout << "FragTrap Copy constructor " << fragTrap.getName() << " was called" << std::endl;
}

// Var2 if no using inherited from ClapTrap
//FragTrap & FragTrap::operator= (const FragTrap & fragTrap) {
//    if (this != &fragTrap) {
//        this->_name = fragTrap._name;
//        this->_hitPoints = fragTrap._hitPoints;
//        this->_energyPoints = fragTrap._hitPoints;
//        this->_attackDamage = fragTrap._attackDamage;
//        std::cout << "FragTrap" << fragTrap.getName() << " assignment operator called" << std::endl;
//    }
//	else
//	    std::cout << fragTrap.getName() << " self assignment" << std::endl;
//
//	return (*this);
//}


FragTrap::~FragTrap() {

	std::cout << "FragTrap Destructor " << getName() <<" called" << std::endl;
	printStatus();
}

//void    FragTrap::attack(const std::string& target) {
//    if (this->_energyPoints <= 0) {
//        std::cout << "FragTrap " << this->_name << " has no mana" <<std::endl;
//        return ;
//    }
//    if (this->_hitPoints <= 0) {
//        std::cout << "FragTrap " << this->_name << " is dead. " << "Cannot continue attack!" << std::endl;
//        return ;
//    }
//    std::cout<<"FragTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
//    this->_energyPoints--;
//}

void    FragTrap::highFivesGuys() {

	if (this->getHitpoints() > 0)
		std::cout << "FragTrap " << this->getName() << " @@@ High five! @@@" << std::endl;
	else
		std::cout << "FragTrap " << this->getName() << " is dead! Cannot high five." << std::endl;
}
