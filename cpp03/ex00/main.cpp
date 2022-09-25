#include "ClapTrap.hpp"

int main(void)
{

    ClapTrap def;

    ClapTrap tom("Tom");
    ClapTrap jerry("Jerry");
    ClapTrap pluto("Pluto");
    ClapTrap mikkiMouse(pluto);
    ClapTrap donald("Donald");
    mikkiMouse.setName("Mikki");

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

	std::cout << "\n*** The end. ***" << std::endl;
}