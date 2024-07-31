#include "AMateria.hpp"

AMateria::AMateria() : type(""), xp(0)
{
}

AMateria::AMateria(std::string const & type) : type(type), xp(0)
{
}

AMateria::AMateria(AMateria const &amateria)
{
	*this = amateria;
}

AMateria &AMateria::operator=(AMateria const &amateria)
{
	if (this != &amateria)
	{
		this->type = amateria.type;
		this->xp = amateria.xp;
	}
	return *this;
}

AMateria::~AMateria()
{
}

std::string const &AMateria::getType() const
{
	return this->type;
}

void AMateria::use(ICharacter &target)
{
	(void)target;
	this->xp += 10;
}