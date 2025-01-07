#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;

	public:
		Fixed(); //default constructor
		Fixed(const int int_number);
		Fixed(const float float_number);
		~Fixed(); //destructor
		Fixed(const Fixed &copy); //copy constructor

		Fixed&	operator=(const Fixed &source); //copy assignment operator

		bool	operator>(const Fixed& ref) const;
		bool	operator<(const Fixed& ref) const;
		bool	operator>=(const Fixed& ref) const;
		bool	operator<=(const Fixed& ref) const;
		bool	operator==(const Fixed& ref) const;
		bool	operator!=(const Fixed& ref) const;

		Fixed	operator+(const Fixed& ref);
		Fixed	operator-(const Fixed& ref);
		Fixed	operator*(const Fixed& ref);
		Fixed	operator/(const Fixed& ref);

		Fixed&	operator++(void);
		Fixed	operator++(int unused);
		Fixed&	operator--(void);
		Fixed	operator--(int unused);

		static Fixed&		min(Fixed& ref1, Fixed& ref2);
		static const Fixed&	min(const Fixed& ref1, const Fixed& ref2);
		static Fixed&		max(Fixed& ref1, Fixed& ref2);
		static const Fixed&	max(const Fixed& ref1, const Fixed& ref2);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

};

	std::ostream& operator<<(std::ostream &output, const Fixed &number);
