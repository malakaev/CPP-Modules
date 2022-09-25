#include "Zombie.hpp"

int main() {

	Zombie*		zombies;
	int			N = 20;
	int			i;

	zombies = zombieHorde(N, "ZombiesHeap");
	std::cout << std::endl;
	std::cout << "Start announcing" << std::endl;
	for (i = 0; i < N; i++)
		zombies[i].announce();
	std::cout << std::endl;
	std::cout << "Start deleting" << std::endl;
	delete [] zombies;
	return 0;
}
