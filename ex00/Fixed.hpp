#pragma once
#include <iostream>

class Fixed
{
	private:
		int					c_fixedPointValue;
		static const int	c_fractionalBits;

	public:
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(const Fixed &copy); //copy constructor
		Fixed &operator=(const Fixed &source); //copy assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};