#include "Fixed.hpp"

const int Fixed::c_fractionalBits = 8;

// CONSTRUCTORS
Fixed::Fixed() : c_fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int int_number) : c_fixedPointValue(int_number << c_fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float float_number) : c_fixedPointValue(roundf(float_number * (1 << c_fractionalBits)))
{
	std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) : c_fixedPointValue(copy.c_fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
};

// DESTRUCTOR

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

// OPERATOR OVERLOADS

Fixed &Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->c_fixedPointValue = source.getRawBits();
	return (*this);
};

std::ostream &operator<<(std::ostream &output, const Fixed &number)
{
	output << number.toFloat();
	return (output);
};

bool	Fixed::operator>(const Fixed &ref)
{
	if (this->c_fixedPointValue > ref.getRawBits())
		return (true);
	else
		return (false);
};
		
bool	Fixed::operator<(const Fixed &ref)
{
	if (this->c_fixedPointValue < ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator>=(const Fixed &ref)
{
	if (this->c_fixedPointValue >= ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator<=(const Fixed &ref)
{
	if (this->c_fixedPointValue <= ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator==(const Fixed &ref)
{
	if (this->c_fixedPointValue == ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator!=(const Fixed &ref)
{
	if (this->c_fixedPointValue != ref.getRawBits())
		return (true);
	else
		return (false);
};

// TO_FLOAT & TO_INT

float	Fixed::toFloat(void) const
{
	return ((float)this->c_fixedPointValue  / (1 << c_fractionalBits));
};

int		Fixed::toInt(void) const
{
	return((int)this->c_fixedPointValue >> c_fractionalBits);
};

// GET AND SET BITS

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
