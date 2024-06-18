#include <iostream>
#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {

	std::cout << "triangle - (0, 0), (4, 0), (2, 3)" << std::endl;
	std::cout << "point - (2, 1) -> inside" << std::endl;
	std::cout << (bsp(Point(0, 0), Point(4, 0), Point(2, 3), Point(2, 1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;
	
	std::cout << "triangle - (0, 0), (4, 0), (2, 3)" << std::endl;
	std::cout << "point - (2, 3) -> inside (boundary)" << std::endl;
	std::cout << (bsp(Point(0, 0), Point(4, 0), Point(2, 3), Point(2, 3)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (0, 0), (4, 0), (2, 3)" << std::endl;
	std::cout << "point - (0, 1) -> outside" << std::endl;
	std::cout << (bsp(Point(0, 0), Point(4, 0), Point(2, 3), Point(0, 1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (1, 1), (3, 1), (2, 4)" << std::endl;
	std::cout << "point - (2, 2) -> inside" << std::endl;
	std::cout << (bsp(Point(1, 1), Point(3, 1), Point(2, 4), Point(2, 2)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (1, 1), (3, 1), (2, 4)" << std::endl;
	std::cout << "point - (2, 1) -> inside (boundary)" << std::endl;
	std::cout << (bsp(Point(1, 1), Point(3, 1), Point(2, 4), Point(2, 1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (1, 1), (3, 1), (2, 4)" << std::endl;
	std::cout << "point - (2, 0) -> outside" << std::endl;
	std::cout << (bsp(Point(1, 1), Point(3, 1), Point(2, 4), Point(2, 0)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (-3, 0), (3, 0), (0, 5)" << std::endl;
	std::cout << "point - (0, 1) -> inside" << std::endl;
	std::cout << (bsp(Point(-3, 0), Point(3, 0), Point(0, 5), Point(0, 1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (-3, 0), (3, 0), (0, 5)" << std::endl;
	std::cout << "point - (4, 1) -> outside" << std::endl;
	std::cout << (bsp(Point(-3, 0), Point(3, 0), Point(0, 5), Point(4, 1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (-2, -2), (2, -2), (0, 2)" << std::endl;
	std::cout << "point - (0, -1) -> inside" << std::endl;
	std::cout << (bsp(Point(-2, -2), Point(2, -2), Point(0, 2), Point(0, -1)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	std::cout << "triangle - (-2, -2), (2, -2), (0, 2)" << std::endl;
	std::cout << "point - (0, -3) -> outside" << std::endl;
	std::cout << (bsp(Point(-2, -2), Point(2, -2), Point(0, 2), Point(0, -3)) ? "True" : "False") << std::endl;
	std::cout << "-------------------------------------------------" << std::endl;

	return 0;
}