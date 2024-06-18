#ifndef POINT_HPP
#define POINT_HPP
#include "Fixed.hpp"

class Point
{
private:
	Fixed x;
	Fixed y;
public:
	Point(/* args */);
	Point(Fixed const x, Fixed const y);
	Point(Point const &point);
	Point &operator=(Point const &point);
	~Point();

	Fixed getX() const { return x; }
	Fixed getY() const { return y; }
};

#endif // POINT_HPP