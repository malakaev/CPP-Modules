#include "ClapTrap.hpp"
// #include <iostream>
// #include <typeinfo>

ClapTrap::ClapTrap(void) {

    _name = "Default_name";
	_hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Default constructor called" << std::endl;
	this->printStatus();
}

ClapTrap::ClapTrap(std::string name): _name(name) {

	_hitPoints = 10;
    _energyPoints = 10;
    _attackDamage = 0;
    std::cout << "Constructor " << _name <<" called" << std::endl;
	this->printStatus();
}

ClapTrap::ClapTrap(const ClapTrap & clapTrap) {

    *this = clapTrap;
    std::cout << "Copy constructor " << clapTrap._name << " was called" << std::endl;
}

ClapTrap & ClapTrap::operator= (const ClapTrap & clapTrap) {

	if (this != &clapTrap) {
        this->_name = clapTrap._name;
        this->_hitPoints = clapTrap._hitPoints;
        this->_energyPoints = clapTrap._hitPoints;
        this->_attackDamage = clapTrap._attackDamage;
        std::cout << this->_name << " assignment operator called" << std::endl;
    }
	else
        std::cout << this->_name << " self assignment" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap() {

    std::cout << "Destructor " << _name << " called" << std::endl;
	this->printStatus();
}


void ClapTrap::attack(const std::string & target) {

	if (this->_energyPoints <= 0) {
        std::cout << this->_name << " doesn't have energy points. Cannot attack." <<std::endl;
        return ;
    }
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " doesn't have hit points. " << "Cannot attack." << std::endl;
        return ;
    }
    std::cout << _name << " attacks " << target
				<< ", causing " << _attackDamage << " points of damage!" << std::endl;
    this->_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {

    if (this->_hitPoints > 0 && this->_hitPoints > amount) {
        this->_hitPoints -= amount;
        std::cout << this->_name << " take " << amount << " points of damage" << std::endl;
    }
    else if (this->_hitPoints > 0 && this->_hitPoints <= amount) {
	    std::cout << this->_name << " take " << this->_hitPoints << " points of damage" << std::endl
        << "and no longer has hit points. (may be died)" << std::endl;
        this->_hitPoints = 0;
    }
    else if (this->_hitPoints <= 0)
        std::cout << this->_name << " doesn't have any hit points. Cannot be damaged" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {

    if (this->_energyPoints <= 0) {
        std::cout << this->_name << " doesn't have any energy points. Cannot be repaired." <<std::endl;
        return ;
    }
    if (this->_hitPoints <= 0) {
        std::cout << this->_name << " doesn't have any hit points. Cannot be repaired." <<std::endl;
        return ;
    }
	if (this->_energyPoints >= amount) {
		this->_hitPoints += amount;
		this->_energyPoints -= amount;
		std::cout<< _name << " is repaired by " << amount
		         << " hit points. Used " << amount << " energy points." << std::endl;
	}
	else {
		this->_hitPoints += this->_energyPoints;
		std::cout << _name << " is repaired by " << this->_energyPoints
				<< " hit points. Used all of " << this->_energyPoints << " energy points." << std::endl;
		this->_energyPoints = 0;
	}
}

int ClapTrap::getEnergypoints(void) const {

    return (this->_energyPoints);
}

int ClapTrap::getHitpoints(void) const {

    return (this->_hitPoints);
}

std::string ClapTrap::getName(void) const {

    return (this->_name);
}

int ClapTrap::getAttackDamage(void) const {

    return (this->_attackDamage);
}

void ClapTrap::setName(std::string name) {

    this->_name = name;
}

void ClapTrap::setHitpoints(unsigned int points) {

    this->_hitPoints = points;
}

void ClapTrap::setEnergypoints(unsigned int points) {

    this->_energyPoints = points;
}

void ClapTrap::setAttackDamage(unsigned int damage) {

    this->_attackDamage = damage;
//	this->printStatus();
}

void ClapTrap::printStatus(void) const {

	std::cout	<< "Print status:" << std::endl
	             << std::setw(18) << std::left
	             << "Name: " << _name << std::endl
	             << std::setw(18) << std::left
	             << "Hitpoints: " << _hitPoints << std::endl
	             << std::setw(18) << std::left
	             << "Energy points: " << _energyPoints << std::endl
	             << std::setw(18) << std::left
	             << "Attack damage: " << _attackDamage << std::endl
	             << std::endl;
}