#pragma once
#include "Fixed.hpp"

class Point
{
	private:
		const Fixed _x;
		const Fixed _y;

	public:
		Point();
		Point(const float f1, const float f2);
		~Point();
		Point(const Point &copy);

		Point	&operator=(const Point &source);

		const Fixed& getX(void) const;
		const Fixed& getY(void) const;
};