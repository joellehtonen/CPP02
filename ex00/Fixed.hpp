#pragma once
#include <iostream>

class Fixed
{
	private:
		int					value;
		static const int	fraction;

	public:
		Fixed(); //default constructor
		~Fixed(); //destructor
		Fixed(const Fixed& other); //copy constructor
		Fixed& operator=(const Fixed& other); //copy assignment operator

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};