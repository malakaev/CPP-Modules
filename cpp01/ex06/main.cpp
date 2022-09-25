#include "Harl.hpp"

int	main(int argc, char** argv) {
	Harl harl;

	if (argc != 2) {
		std::cout
			<< "Error argument:\n"
			<< "Needs program name with argument one of: DEBUG, INFO, WARNING or ERROR\n"
			<< "or another argument for default message."
			<< std::endl;
		return (1);
	}
	harl.complain(argv[1]);

	return (0);
}