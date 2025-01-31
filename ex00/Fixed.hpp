#pragma once
#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits;

	public:
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(const Fixed &copy); //copy constructor
		Fixed& operator=(const Fixed &source); //copy assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};