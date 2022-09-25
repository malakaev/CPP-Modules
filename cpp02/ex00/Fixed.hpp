#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

	public:

		//default constructor
		Fixed(void);

		//copy constructor
		Fixed (const Fixed & src);

		//A copy assignment operator overload
		Fixed & operator=(const Fixed &val);

		//destructor
		~Fixed();

		int getRawBits( void ) const;
		void setRawBits( int const raw );

	private:
		int					_fixedPointNumber;
		static const int	_numberOfBits = 8;
};
#endif