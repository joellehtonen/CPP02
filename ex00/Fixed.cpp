#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
};

Fixed::Fixed(const Fixed& other)
{
	std::cout << "Copy constructor called" << std::endl;
};

Fixed& operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
};

int		Fixed::getRawBits(void) const
{


}

void	Fixed::setRawBits(int const raw)
{

}
