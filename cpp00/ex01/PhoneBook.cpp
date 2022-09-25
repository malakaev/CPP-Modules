//
// Created by Kamilah Golda on 5/1/22.
//

#include "PhoneBook.hpp"
#include <cstdlib>


PhoneBook::PhoneBook() {
	std::cout << "Phonebook constructor" << std::endl;
	_count = 0;
}

PhoneBook::~PhoneBook() {}

void PhoneBook::add() {
	_contacts[_count].set();
	_count = (_count + 1) % 8;
}

void PhoneBook::search() {
	int			i;
	int			num;
	size_t		j;
	std::string	str;

	std::cout << "-------------------------------------------" << std::endl;
	std::cout << "    id    |   NAME   | LASTNAME | NICKNAME  " << std::endl;
	std::cout << "__________|__________|__________|__________" << std::endl;
	i = 0;
	while (i < 8 && !_contacts[i].getDarkSecret().empty()) {
		std::cout << std::setw(10) << i + 1;
		_display(_contacts[i].getFirstName());
		_display(_contacts[i].getLastName());
		_display(_contacts[i].getNickName());
		std::cout << std::endl;
		i++;
	}
	if (i == 0) {
		std::cout << std::endl << "Empty book" << std::endl;
		return;
	}
	else
	{
		std::cout << "__________|__________|__________|__________" << std::endl << std::endl;
	}
	num = 0;
	while (num < 1 || num > i) {
		if (std::cin.eof())
			return;
		std::cout << "Enter the contact number from 1 to " << i << ": ";
		std::getline(std::cin >> std::ws, str);
		j = 0;
		while (isdigit(str[j])) {
			j++;
		}
		if (j == str.size())
			num = (int)strtol(str.c_str(), nullptr, 0);
	}
	std::cout << "First name: " << _contacts[num - 1].getFirstName() << std::endl;
	std::cout << "Last name: " << _contacts[num - 1].getLastName() << std::endl;
	std::cout << "Nick name: " << _contacts[num - 1].getNickName() << std::endl;
	std::cout << "Phone number: " << _contacts[num - 1].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << _contacts[num - 1].getDarkSecret() << std::endl;
}

void PhoneBook::_display(const std::string& str) const {
	std::cout << "|";
	if (str.size() < 11) {
		std::cout << std::setw(10) << str;
	}
	else {
		std::cout << str.substr(0, 9) << ".";
	}
}
