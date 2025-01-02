#include "Fixed.hpp"

const int Fixed::c_fractionalBits = 8;

Fixed::Fixed() : c_fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) : c_fixedPointValue(copy.c_fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
};

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &source)
		this->c_fixedPointValue = source.getRawBits();
	return (*this);
};

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->c_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	this->c_fixedPointValue = raw;
}
