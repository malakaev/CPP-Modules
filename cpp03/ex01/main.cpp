#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{

    ClapTrap def;

    ClapTrap tom("Tom");
    ScavTrap jerry("Jerry");
    ScavTrap pluto("Pluto");
//    ClapTrap mikkiMouse(pluto);
    ScavTrap mikkiMouse("Mixer");
    ClapTrap donald("Donald");
    mikkiMouse.setName("Mikki");

//	donald = mikkiMouse;
	mikkiMouse = donald;
	mikkiMouse.printStatus();

	std::cout << std::endl << "ClassName: " << typeid(tom).name() << std::endl;
	std::cout << std::endl << "ClassName: " << typeid(jerry).name() << std::endl;
	std::cout << std::endl << "mikkiMouse ClassName: " << typeid(mikkiMouse).name() << std::endl;
	std::cout << std::endl << "ClassName: " << typeid(donald).name() << std::endl;

	std::cout << "\n--- Set parameters ---" << std::endl;
	pluto.setAttackDamage(3);
    mikkiMouse.setAttackDamage(2);
    donald.setAttackDamage(10);
    tom.setAttackDamage(3);
    jerry.setAttackDamage(2);

	std::cout << "\n===== Start Fighting =====" << std::endl;
	pluto.attack(jerry.getName());
    jerry.takeDamage(pluto.getAttackDamage());
    jerry.beRepaired(3);
    tom.attack(pluto.getName());
    pluto.takeDamage(tom.getAttackDamage());
    pluto.beRepaired(3);
    mikkiMouse.attack(tom.getName());
    tom.takeDamage(mikkiMouse.getAttackDamage());
    donald.attack(jerry.getName());
    jerry.takeDamage(10);
    jerry.beRepaired(jerry.getEnergypoints());
    
    mikkiMouse.attack(jerry.getName());
    pluto.attack(jerry.getName());
    jerry.beRepaired(3);
    jerry.takeDamage(pluto.getAttackDamage());

    tom.attack(pluto.getName());
    pluto.takeDamage(3);
    tom.attack(pluto.getName());
    pluto.takeDamage(3);
    tom.attack(pluto.getName());
    pluto.takeDamage(3);
    tom.attack(pluto.getName());
    pluto.takeDamage(3);
    pluto.beRepaired(8);
    pluto.attack(tom.getName());

	std::cout << "\n===== Test Fighting 2 =====" << std::endl;
	jerry.setAttackDamage(100);
	jerry.attack(pluto.getName());
	jerry.setEnergypoints(100);
	jerry.attack(pluto.getName());
	pluto.takeDamage(100);

	std::cout << "\n_____ Test GuardGate _____" << std::endl;
	mikkiMouse.guardGate();
	jerry.guardGate();
	pluto.guardGate();
//	tom.guardGate();

	std::cout << "\n*** The end. ***" << std::endl;
}