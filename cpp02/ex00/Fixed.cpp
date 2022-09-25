#include "Fixed.hpp"

//default constructor
Fixed::Fixed(): _fixedPointNumber(0) {
	std::cout << "Default constructor called" << std::endl;
}
//copy constructor
Fixed::Fixed (const Fixed & src) {
	std::cout << "Copy constructor called" << std::endl;
	// _fixedPointNumber = src._fixedPointNumber;
	*this = src;
	}

//A copy assignment operator overload
Fixed &	Fixed::operator=(const Fixed & val) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &val)
		setRawBits(val.getRawBits());
	else
		std::cout << "self - assignment" << std::endl;
	return *this;
	}

//destructor
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
	}

int		Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;

	return _fixedPointNumber;
	}

void	Fixed::setRawBits( int const raw ) {
	this->_fixedPointNumber = raw;
	}
