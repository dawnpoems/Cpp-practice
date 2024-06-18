#include "Point.hpp"

Point::Point(/* args */) : x(0), y(0)
{
}

Point::Point(Fixed const x, Fixed const y) : x(x), y(y)
{
}

Point::Point(Point const &point) : x(point.x), y(point.y)
{
}

Point &Point::operator=(Point const &point)
{
	this->x = point.x;
	this->y = point.y;
	return (*this);
}

Point::~Point()
{
}





