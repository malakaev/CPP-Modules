#include "PhoneBook.hpp"

int main() {
	PhoneBook	phoneBook;
	std::string	str;

	str = "";
	while (!std::cin.eof() && str != "EXIT" && str != "exit") {
		std::cout << "Enter ADD or SEARCH or EXIT: ";
		if (std::getline(std::cin >> std::ws, str) == nullptr)
			return 0;
		if (str == "ADD" || str == "add") {
			phoneBook.add();
		}
		else if (str == "SEARCH" || str == "search") {
			phoneBook.search();
		}
	}
	return 0;
}
