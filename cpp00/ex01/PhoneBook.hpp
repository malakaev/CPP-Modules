//
// Created by Kamilah Golda on 5/1/22.
//

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iomanip>
#include <iostream>
#include "Contact.hpp"

class PhoneBook {

public:
	PhoneBook();
	~PhoneBook();

	void add();
	void search();

private:
	int		_count;
	Contact	_contacts[8];

	void _display(const std::string &str) const;
};

#endif
