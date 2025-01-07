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
		
		Fixed& operator=(const Fixed &source); //copy assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

};

	std::ostream& operator<<(std::ostream& output, const Fixed& number);