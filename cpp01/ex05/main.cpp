#include "Harl.hpp"

int	main() {
	Harl harl;

	std::cout << "Correct requests:" << std::endl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	std::cout << "\nIncorrect requests:" << std::endl;
	harl.complain("DEBU");
	harl.complain("Debug");
	harl.complain("debug");
	harl.complain("123");
	harl.complain("");

	std::cout << "\nMixed requests:" << std::endl;
	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("INFORM");

	return (0);
}