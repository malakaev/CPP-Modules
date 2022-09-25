#include "Base.hpp"

int main()
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		Base * base = generate();
		identify(base);
		identify(*base);
		delete base;
		std::cout << "---------------" << std::endl;
	}

	return (0);
}
