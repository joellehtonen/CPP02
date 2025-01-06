#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main()
{
	Point a(0.0f, 0.0f);
	Point b(10.0f, 30.0f);
	Point c(20.0f, 0.0f);

	std::cout << "TEST 1 (expected result: inside)" << std::endl;
	Point p1(10.0f, 15.0f);
	bool calc1 = (bsp(a, b, c, p1));
	if (calc1)
		std::cout <<"Inside" << std::endl;
	else
    	std::cout <<"Outside" << std::endl;
	std::cout << std::endl;

	std::cout << "TEST 2 (expected result: outside)" << std::endl;
	Point p2(30.0f, 150.0f);
	bool calc2 = (bsp(a, b, c, p2));
	if (calc2)
		std::cout <<"Inside" << std::endl;
	else
    	std::cout <<"Outside" << std::endl;
	std::cout << std::endl;

	std::cout << "TEST 3 (expected result: outside)" << std::endl;
	Point p3(0.0f, 0.0f);
	bool calc3 = (bsp(a, b, c, p3));
	if (calc3)
		std::cout <<"Inside" << std::endl;
	else
    	std::cout <<"Outside" << std::endl;
	std::cout << std::endl;

	return (0);
}