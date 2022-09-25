#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed {

	private:
		int					_fixedPointNumber;
		static const int	_numberOfBits = 8;

	public:

		Fixed(void);
		Fixed(const int param);
		Fixed(const float param);
		Fixed (const Fixed & src);
		~Fixed();

		Fixed & operator=(const Fixed & val);

		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat( void ) const;
		int toInt( void ) const;

		const static Fixed & min(Fixed & first, Fixed & second);
		const static Fixed & min(const Fixed & first, const Fixed & second);
		const static Fixed & max(Fixed & first, Fixed & second);
		const static Fixed & max(const Fixed & first, const Fixed & second);


	bool operator>(const Fixed & val) const;
	bool operator<(const Fixed & val) const;
	bool operator<=(const Fixed & val) const;
	bool operator>=(const Fixed & val) const;
	bool operator==(const Fixed & val) const;
	bool operator!=(const Fixed & val) const;

	Fixed operator+(const Fixed & val) const;
	Fixed operator-(const Fixed & val) const;
	Fixed operator*(const Fixed & val) const;
	Fixed operator/(const Fixed & val) const;

//prefix operators
	Fixed & operator++();
	Fixed & operator--();

// postfix operators
	Fixed operator++(int);
	Fixed operator--(int);

};
	std::ostream & operator<<(std::ostream & stream, const Fixed & val);

#endif
