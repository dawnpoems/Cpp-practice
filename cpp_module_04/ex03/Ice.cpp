#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(Ice const &ice)
{
	*this = ice;
}

Ice &Ice::operator=(Ice const &ice)
{
	if (this != &ice)
	{
		this->type = ice.type;
		this->xp = ice.xp;
	}
	return *this;
}

Ice::~Ice()
{
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	this->xp += 10;
}

AMateria *Ice::clone() const
{
	return new Ice(*this);
}