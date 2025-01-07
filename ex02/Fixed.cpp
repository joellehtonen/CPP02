#include "Fixed.hpp"

const int Fixed::_fractionalBits = 8;

// CONSTRUCTORS
Fixed::Fixed() : _fixedPointValue(0)
{
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const int int_number) : _fixedPointValue(int_number << _fractionalBits)
{
	std::cout << "Int constructor called" << std::endl;
};

Fixed::Fixed(const float float_number) : _fixedPointValue(roundf(float_number * (1 << _fractionalBits)))
{
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

Fixed&	Fixed::operator=(const Fixed &source)
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

// comparison operators

bool	Fixed::operator>(const Fixed& ref) const
{
	if (this->_fixedPointValue > ref.getRawBits())
		return (true);
	else
		return (false);
};
		
bool	Fixed::operator<(const Fixed& ref) const
{
	if (this->_fixedPointValue < ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator>=(const Fixed& ref) const
{
	if (this->_fixedPointValue >= ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator<=(const Fixed& ref) const
{
	if (this->_fixedPointValue <= ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator==(const Fixed& ref) const
{
	if (this->_fixedPointValue == ref.getRawBits())
		return (true);
	else
		return (false);
};

bool	Fixed::operator!=(const Fixed& ref) const
{
	if (this->_fixedPointValue != ref.getRawBits())
		return (true);
	else
		return (false);
};

// arithmetic operators

Fixed	Fixed::operator+(const Fixed& ref)
{
	return (this->toFloat() + ref.toFloat());
};

Fixed	Fixed::operator-(const Fixed& ref)
{
	return (this->toFloat() - ref.toFloat());
};

Fixed	Fixed::operator*(const Fixed& ref)
{
	return (this->toFloat() * ref.toFloat());
};

Fixed	Fixed::operator/(const Fixed& ref)
{
	return (this->toFloat() / ref.toFloat());
};

// increment/decrement operators

Fixed&	Fixed::operator++(void)
{
	this->_fixedPointValue += 1;
	return (*this);
};

Fixed	Fixed::operator++(int unused)
{
	(void)unused;
	Fixed valueBeforeIncrement = *this;

	this->_fixedPointValue += 1;
	return (valueBeforeIncrement);
};

Fixed&	Fixed::operator--(void)
{
	this->_fixedPointValue -= 1;
	return (*this);
};

Fixed	Fixed::operator--(int unused)
{
	(void)unused;
	Fixed valueBeforeDecrement = *this;

	this->_fixedPointValue -= 1;
	return (valueBeforeDecrement);
};

// MAX & MIN

Fixed& Fixed::min(Fixed& ref1, Fixed& ref2)
{
	if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
};

const Fixed& Fixed::min(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1 <= ref2)
		return (ref1);
	else
		return (ref2);
};

Fixed& Fixed::max(Fixed& ref1, Fixed& ref2)
{
	if (ref1 >= ref2)
		return (ref1);
	else
		return (ref2);
};

const Fixed& Fixed::max(const Fixed& ref1, const Fixed& ref2)
{
	if (ref1 >= ref2)
		return (ref1);
	else
		return (ref2);
};

// TO_FLOAT & TO_INT

float	Fixed::toFloat(void) const
{
	return ((float)this->_fixedPointValue  / (1 << _fractionalBits));
};

int		Fixed::toInt(void) const
{
	return((int)this->_fixedPointValue >> _fractionalBits);
};

// GET AND SET BITS

int		Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void	Fixed::setRawBits(int const raw)
{
	//std::cout << "getRawBits member function called" << std::endl;
	this->_fixedPointValue = raw;
}
