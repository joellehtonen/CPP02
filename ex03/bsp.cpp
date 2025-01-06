#include "Point.hpp"

float	calculateArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (0.5*std::abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))));
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	// float ab = ((p.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()) - (p.getY().toFloat() - a.getY().toFloat()) * (b.getX().toFloat() - a.getX().toFloat()));
	// float bc = ((p.getX().toFloat() - b.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat()) - (p.getY().toFloat() - b.getY().toFloat()) * (c.getX().toFloat() - b.getX().toFloat()));
	// float ca = ((p.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()) - (p.getY().toFloat() - c.getY().toFloat()) * (a.getX().toFloat() - c.getX().toFloat()));

	// if (ab >= 0 && bc >= 0 && ca >= 0)
	// 	return (true);
	// else
	// 	return (false);

	if ((p.getX() == a.getX() && p.getY() == a.getY())
		|| (p.getX() == b.getX() && p.getY() == b.getY())
		|| (p.getX() == c.getX() && p.getY() == c.getY()))
	{
		return false;
	}

	float	abcArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	pabArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), p.getX().toFloat(), p.getY().toFloat());
	float	pbcArea = calculateArea(p.getX().toFloat(), p.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	pcaArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), p.getX().toFloat(), p.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	totalSum = pabArea + pbcArea + pcaArea;

	std::cout << "Total Area is " << abcArea << std::endl;
	std::cout << "Total Sum is " << totalSum << std::endl;

	if (totalSum == abcArea)
		return true;
	else
		return false;
}
