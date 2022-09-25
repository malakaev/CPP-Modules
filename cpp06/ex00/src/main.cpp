#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert conv;
		std::string input = static_cast<std::string>(argv[1]);
		conv.typeCheck(input);
		conv.convertation(input);
	}
	else
	{
		std::cout << "to run required: program name and one argument" << std::endl;
		return (1);
	}
	return (0);
}
