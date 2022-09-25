#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	public:

		Fixed();
		Fixed(const int param);
		Fixed(const float param);
		Fixed (const Fixed &src);
		~Fixed();

		Fixed & operator=(const Fixed &val);

		int getRawBits( void ) const;
		void setRawBits( int const raw );

		float toFloat( void ) const;
		int toInt( void ) const;

	private:
		int					_fixedPointNumber;
		static const int	_numberOfBits = 8;


};
	std::ostream & operator<<(std::ostream &stream, const Fixed &val);

#endif
