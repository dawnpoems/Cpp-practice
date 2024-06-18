#include "DiamondTrap.hpp"

#include "ClapTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
}

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name), ScavTrap(name), FragTrap(name)
{
	this->name = name;
	this->hitPoints = FragTrap::hitPoints;
	this->energyPoints = ScavTrap::energyPoints;
	this->attackDamage = FragTrap::attackDamage;
	std::cout << "DiamondTrap " << this->name << " is born!" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap)
{
	*this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
	this->name = diamondTrap.name;
	this->hitPoints = diamondTrap.hitPoints;
	this->energyPoints = diamondTrap.energyPoints;
	this->attackDamage = diamondTrap.attackDamage;
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << this->name << " is dead!" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

