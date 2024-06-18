#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	ClapTrap claptrap("clapTrap");

	claptrap.attack("You1");
	claptrap.attack("You2");
	claptrap.attack("You3");
	claptrap.attack("You4");
	claptrap.attack("You5");;
	claptrap.takeDamage(10);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);
	claptrap.beRepaired(5);

	claptrap.attack("You6");
	claptrap.beRepaired(5);
	std::cout << "-------------------------------------------------" << std::endl;

	ScavTrap scavtrap("scavTrap");
	for (int i = 0; i < 30; i++)
	{
		scavtrap.attack("You" + std::to_string(i));
		scavtrap.beRepaired(5);
	}
	
	scavtrap.takeDamage(10);
	scavtrap.guardGate();

	return 0;
}