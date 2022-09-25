//
// Created by Kamilah Golda on 5/1/22.
//

#include "Contact.hpp"
#include <iostream>

Contact::Contact() {
	std::cout << "contact constructor" << std::endl;
	_firstName = "";
	_lastName = "";
	_nickName = "";
	_phoneNumber = "";
	_darkSecret = "";
}

Contact::~Contact() {}

void Contact::setFirstName() {
	_firstName.clear();
	while (!std::cin.eof() && _firstName.empty()) {
		std::cout << "Enter the first name: ";
		std::getline(std::cin >> std::ws, _firstName);
	}
}

std::string Contact::getFirstName() const {
	return _firstName;
}

void Contact::setLastName() {
	_lastName.clear();
	while (!std::cin.eof() && _lastName.empty()) {
		std::cout << "Enter the last name: ";
		std::getline(std::cin >> std::ws, _lastName);
	}
}

std::string Contact::getLastName() const {
	return _lastName;
}

void Contact::setNickName() {
	_nickName.clear();
	while (!std::cin.eof() && _nickName.empty()) {
		std::cout << "Enter the nick name: ";
		std::getline(std::cin >> std::ws, _nickName);
	}
}

std::string Contact::getNickName() const {
	return _nickName;
}

void Contact::setPhoneNumber() {
	_phoneNumber.clear();
	while (!std::cin.eof() && _phoneNumber.empty()) {
		std::cout << "Enter the phone number: ";
		std::getline(std::cin >> std::ws, _phoneNumber);
	}
}

std::string Contact::getPhoneNumber() const {
	return _phoneNumber;
}

void Contact::setDarkSecret() {
	_darkSecret.clear();
	while (!std::cin.eof() && _darkSecret.empty()) {
		std::cout << "Enter the darkest secret: ";
		std::getline(std::cin >> std::ws, _darkSecret);
	}
}

std::string Contact::getDarkSecret() const {
	return _darkSecret;
}

void Contact::set() {
	setFirstName();
	setLastName();
	setNickName();
	setPhoneNumber();
	setDarkSecret();
}
