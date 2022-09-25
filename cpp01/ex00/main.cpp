#include <iostream>
#include "Zombie.hpp"

int main() {

//	Zombie * zombie =  newZombie("Heap");
	Zombie * zombie = nullptr;

	zombie = newZombie("Heap");
	zombie->announce();
	randomChump("Stack");
	delete zombie;
	return 0;
}
