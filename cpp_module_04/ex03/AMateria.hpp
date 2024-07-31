#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	protected:
		std::string type;
		unsigned int xp;
		
	public:
		AMateria();
		AMateria(AMateria const &amateria);
		AMateria &operator=(AMateria const &amateria);
		virtual ~AMateria();
		AMateria(std::string const & type);
	// [...]
		std::string const & getType() const; //Returns the materia type
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};

#endif // AMATERIA_HPP

