#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const p)
{
	// float ab = ((point.getX().toFloat() - a.getX().toFloat()) * (b.getY().toFloat() - a.getY().toFloat()) - (point.getY().toFloat() - a.getY().toFloat()) * (b.getX().toFloat() - a.getX().toFloat()));
	// float bc = ((point.getX().toFloat() - b.getX().toFloat()) * (c.getY().toFloat() - b.getY().toFloat()) - (point.getY().toFloat() - b.getY().toFloat()) * (c.getX().toFloat() - b.getX().toFloat()));
	// float ca = ((point.getX().toFloat() - c.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat()) - (point.getY().toFloat() - c.getY().toFloat()) * (a.getX().toFloat() - c.getX().toFloat()));

	// if (ab >= 0 && bc >= 0 && ca >= 0)
	// 	return (true);
	// else
	// 	return (false);

	float	totalArea = 0.5 * ((b.getX().toFloat() - a.getX().toFloat()) * (c.getY().toFloat() - a.getY().toFloat()) - (b.getY().toFloat() - a.getY().toFloat()) * (c.getX().toFloat()- a.getX().toFloat()));
	float	pab =
	float	pbc =
	float	pca = 
	float	totalSum = pab + pbc + pca;


}
