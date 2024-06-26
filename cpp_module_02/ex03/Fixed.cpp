#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(int const value)
{
	this->value = value << Fixed::bits;
}

Fixed::Fixed(float const value)
{
	this->value = roundf(value * (1 << Fixed::bits));
}

Fixed::Fixed(const Fixed& other) 
{
	*this = other;
}

Fixed::~Fixed()
{
}

bool Fixed::operator>(const Fixed& other) const
{
	return (this->value > other.getRawBits());
}

bool Fixed::operator<(const Fixed& other) const
{
	return (this->value < other.getRawBits());
}

bool Fixed::operator>=(const Fixed& other) const
{
	return (this->value >= other.getRawBits());
}

bool Fixed::operator<=(const Fixed& other) const
{
	return (this->value <= other.getRawBits());
}

bool Fixed::operator==(const Fixed& other) const
{
	return (this->value == other.getRawBits());
}

bool Fixed::operator!=(const Fixed& other) const
{
	return (this->value != other.getRawBits());
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->value = other.getRawBits();
	return (*this);
}

Fixed Fixed::operator+(const Fixed& other) const
{
	return (Fixed(this->toFloat() + other.toFloat()));
}

Fixed Fixed::operator-(const Fixed& other) const
{
	return (Fixed(this->toFloat() - other.toFloat()));
}

Fixed Fixed::operator*(const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator/(const Fixed& other) const
{
	return (Fixed(this->toFloat() / other.toFloat()));
}

Fixed& Fixed::operator++()
{
	this->value++;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->value++;
	return (tmp);
}

Fixed& Fixed::operator--()
{
	this->value--;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed tmp = *this;
	this->value--;
	return (tmp);
}


Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	return (a < b ? a : b);
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	return (a > b ? a : b);
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a > b ? a : b);
}

std::ostream &operator<<(std::ostream &os, Fixed const &fixed)
{
	os << fixed.toFloat();
	return (os);
}

int Fixed::getRawBits(void) const
{
	return (this->value);
}

void Fixed::setRawBits(int const raw)
{
	this->value = raw;
}

float Fixed::toFloat(void) const
{
	return ((float)this->value / (1 << Fixed::bits));
}

int Fixed::toInt(void) const
{
	return (this->value >> Fixed::bits);
}

