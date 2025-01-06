#include "Point.hpp"

Point::Point() : _x(0), _y(0) { };

Point::Point(const float f1, const float f2) : _x(f1), _y(f2) { };

Point::~Point() { };

Point::Point(const Point &copy) : _x(copy._x), _y(copy._y) { };

Point &Point::operator=(const Point &source)
{
	if (this == &source)
		return (*this);
	else
		return (*this);
};

const Fixed& Point::getX(void) const
{
	return (this->_x);
};

const Fixed& Point::getY(void) const
{
	return (this->_y);
};
