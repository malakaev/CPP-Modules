//
// Created by Kamilah Golda on 5/15/22.
//

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {

public:
	Harl();
	~Harl();
	void complain( std::string level );

private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
	void mute();

};

#endif
