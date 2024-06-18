#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {

	FragTrap fragtrap("frag");

	for (int i = 0; i < 60; i++)
	{
		fragtrap.attack("You" + std::to_string(i));
		fragtrap.beRepaired(5);
	}
	
	fragtrap.takeDamage(10);
	fragtrap.highFivesGuys();

	return 0;
}