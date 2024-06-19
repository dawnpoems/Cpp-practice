#include "Dog.hpp"
#include <iostream>

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(Dog const &dog)
{
	*this = dog;
	std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &dog)
{
	this->type = dog.type;
	std::cout << "Dog assignation operator called" << std::endl;
	return (*this);
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const
{
	std::cout << "GRRRRRRRRRRRRRR!!!" << std::endl;
}