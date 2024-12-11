#pragma once
#include <iostream>

class Fixed
{
	private:
		int					fixedPointValue_;
		static const int	fractionalBits_ = 8;

	public:
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(const Fixed& copy); //copy constructor
		Fixed &operator=(const Fixed& source); //copy assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};