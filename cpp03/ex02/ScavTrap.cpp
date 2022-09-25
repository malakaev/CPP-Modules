#include "ScavTrap.hpp"

//Default constructor var1
//ScavTrap::ScavTrap(void): ClapTrap::ClapTrap() {
//
//    _name = "Def_ScavTrap_Name";
//    _hitPoints = 100;
//    _energyPoints = 50;
//    _attackDamage = 20;
//    std::cout << "ScavTrap Default constructor called" << std::endl;
//}

//Default constructor var2
ScavTrap::ScavTrap(void) : ClapTrap() {

	setName("Def_ScavTrap_Name");
	setHitpoints(100);
	setEnergypoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string & name) : ClapTrap(name) {

	setHitpoints(100);
	setEnergypoints(50);
	setAttackDamage(20);
	std::cout << "ScavTrap constructor " << name << " called" << std::endl;
	this->printStatus();
}

// Copy constructor var 1
//ScavTrap::ScavTrap(std::string name): ClapTrap::ClapTrap(name) {
//
//    _name = name;
//    _hitPoints = 100;
//    _energyPoints = 50;
//    _attackDamage = 20;
//    std::cout << "ScavTrap copy constructor " << _name <<" was called" << std::endl;
//}

// Copy constructor var 2 using copy constructor inherited from ClapTrap
ScavTrap::ScavTrap(const ScavTrap & scavTrap) : ClapTrap::ClapTrap(scavTrap) {

//    *this = scavTrap;
	std::cout << "ScavTrap Copy constructor " << scavTrap.getName() << " was called" << std::endl;
}

// Var2 if no using inherited from ClapTrap
//ScavTrap & ScavTrap::operator= (const ScavTrap & scavTrap) {
//    if (this != &scavTrap) {
//        this->_name = scavTrap._name;
//        this->_hitPoints = scavTrap._hitPoints;
//        this->_energyPoints = scavTrap._hitPoints;
//        this->_attackDamage = scavTrap._attackDamage;
//        std::cout << "ScavTrap" << scavTrap.getName() << " assignment operator called" << std::endl;
//    }
//	else
//	    std::cout << scavTrap.getName() << " self assignment" << std::endl;
//
//	return (*this);
//}


ScavTrap::~ScavTrap() {

	std::cout << "ScavTrap Destructor " << getName() <<" called" << std::endl;
	printStatus();
}

//void    ScavTrap::attack(const std::string& target) {
//    if (this->_energyPoints <= 0) {
//        std::cout << "ScavTrap " << this->_name << " has no mana" <<std::endl;
//        return ;
//    }
//    if (this->_hitPoints <= 0) {
//        std::cout << "ScavTrap " << this->_name << " is dead. " << "Cannot continue attack!" << std::endl;
//        return ;
//    }
//    std::cout<<"ScavTrap "<<_name<<" attacks "<<target<<", causing "<<_attackDamage<<" points of damage!"<<std::endl;
//    this->_energyPoints--;
//}

void ScavTrap::guardGate() {

	if (this->getHitpoints() > 0)
		std::cout << "ScavTrap " << this->getName() << " entering in Gate keeper mode!" << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " is dead! Cannot entering in Gate keeper mode." << std::endl;
}
