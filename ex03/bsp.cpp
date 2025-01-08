#include "Point.hpp"

float	calculateArea(float x1, float y1, float x2, float y2, float x3, float y3)
{
	return (0.5*std::abs((x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))));
}

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	if ((p.getX() == a.getX() && p.getY() == a.getY())
		|| (p.getX() == b.getX() && p.getY() == b.getY())
		|| (p.getX() == c.getX() && p.getY() == c.getY()))
	{
		std::cout << "The point is on a vertex" << std::endl;
		return false;
	}

	float	abcArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	pabArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), p.getX().toFloat(), p.getY().toFloat());
	float	pbcArea = calculateArea(p.getX().toFloat(), p.getY().toFloat(), b.getX().toFloat(), b.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	pcaArea = calculateArea(a.getX().toFloat(), a.getY().toFloat(), p.getX().toFloat(), p.getY().toFloat(), c.getX().toFloat(), c.getY().toFloat());
	float	totalSum = pabArea + pbcArea + pcaArea;

	if (pabArea == 0 || pbcArea == 0 || pcaArea == 0)
	{
		std::cout << "The point is on an edge" << std::endl;
		return false;
	}

	std::cout << "Total Area is " << abcArea << std::endl;
	std::cout << "Total Sum is " << totalSum << std::endl;

	if (totalSum == abcArea)
		return true;
	else
		return false;
}
