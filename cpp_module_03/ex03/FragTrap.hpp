#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(/* args */);
	FragTrap(std::string const &name);
	FragTrap(FragTrap const &fragTrap);
	FragTrap &operator=(FragTrap const &fragTrap);
	virtual ~FragTrap();

	void highFivesGuys(void);
};


#endif // FRAG_TRAP_HPP