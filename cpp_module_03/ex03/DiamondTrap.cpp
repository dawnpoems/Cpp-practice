#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap()
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string const &name)
: ClapTrap(name + "_clap_name", FragTrap::_unitHP, ScavTrap::_unitEP, FragTrap::_unitAD), ScavTrap(name), FragTrap(name), name(name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &diamondTrap)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = diamondTrap;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const &diamondTrap)
{
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	ClapTrap::operator=(diamondTrap);
	return (*this);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

void DiamondTrap::whoAmI()
{
	std::cout << "I am " << this->name << " and my ClapTrap name is " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}