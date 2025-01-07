#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;
const int Fixed::_powerValue = std::pow(2, _fractionalBits); //256

// CONSTRUCTORS
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int int_number) : _fixedPointValue(int_number * _powerValue)
{
	std::cout << "Int value is " << int_number << " and fixed-point value is " << _fixedPointValue << std::endl;
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float float_number) : _fixedPointValue(roundf(float_number * _powerValue))
{
	std::cout << "Float value is " << float_number << " and fixed-point value is " << _fixedPointValue << std::endl;
	std::cout << "Float constructor called" << std::endl;
};

Fixed::Fixed(const Fixed &copy) : _fixedPointValue(copy._fixedPointValue)
{
	std::cout << "Copy constructor called" << std::endl;
};

// DESTRUCTOR

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
};

// OPERATOR OVERLOADS

Fixed& Fixed::operator=(const Fixed &source)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->_fixedPointValue = source.getRawBits();
	return (*this);
};

std::ostream& operator<<(std::ostream& output, const Fixed& number)
{
	output << number.toFloat();
	return (output);
};

// TO_FLOAT & TO_INT

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue  / _powerValue);
};

int		Fixed::toInt(void) const
{
	return((int)this->_fixedPointValue / _powerValue);
};

// GET AND SET BITS

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "getRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}
