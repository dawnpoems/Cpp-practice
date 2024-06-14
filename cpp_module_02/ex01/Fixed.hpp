#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int value;
	static const int bits = 8;
public :
	Fixed();
	Fixed(int const value);
	Fixed(float const value);
	Fixed(Fixed const &fixed);
	~Fixed();
	Fixed &operator=(Fixed const &fixed);
	friend std::ostream &operator<<(std::ostream &os, Fixed const &fixed);
	int getRawBits(void) const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
};

#endif // FIXED_HPP