#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	std::cout << "FragTrap default constructor" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string const &name) : ClapTrap(name)
{
	std::cout << "FragTrap name constructor" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(FragTrap const &fragTrap)
{
	std::cout << "FragTrap copy constructor" << std::endl;
	*this = fragTrap;
}

FragTrap &FragTrap::operator=(FragTrap const &fragTrap)
{
	std::cout << "FragTrap assignation operator" << std::endl;
	this->name = fragTrap.name;
	this->hitPoints = fragTrap.hitPoints;
	this->energyPoints = fragTrap.energyPoints;
	this->attackDamage = fragTrap.attackDamage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}