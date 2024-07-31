#include "Cure.hpp"

#include <iostream>

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(Cure const &cure)
{
	*this = cure;
}

Cure &Cure::operator=(Cure const &cure)
{
	if (this != &cure)
	{
		this->type = cure.type;
		this->xp = cure.xp;
	}
	return *this;
}

Cure::~Cure()
{
}

void Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	this->xp += 10;
}

AMateria *Cure::clone() const
{
	return new Cure(*this);
}