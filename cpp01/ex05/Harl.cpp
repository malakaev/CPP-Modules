//
// Created by Kamilah Golda on 5/15/22.
//

#include "Harl.hpp"

Harl::Harl() {
}

Harl::~Harl() {
}

void Harl::debug( void ) {
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-"
				 "pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info( void ) {
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
				 "You didn’t put enough bacon in my burger! If you did, "
				 "I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning( void ) {
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
				 "I’ve been coming for years whereas you started working "
				 "here since last month." << std::endl;
}

void Harl::error( void ) {
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::mute() {
	std::cout << "--- No such level. ---" << std::endl;
}


void Harl::complain( std::string level ) {

	void (Harl::*ptrToFunc[5])() =
		{
			&Harl::debug,
			&Harl::info,
			&Harl::warning,
			&Harl::error,
			&Harl::mute
		};

	std::string levels[4] =
		{
			"DEBUG",
			"INFO",
			"WARNING",
			"ERROR"
		};

	int i = 0;
	while(i < 4 && levels[i] != level)
		i++;
	(this->*ptrToFunc[i])();

}
