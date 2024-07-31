#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat)
{
	*this = cat;
	std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &cat)
{
	this->type = cat.type;
	std::cout << "Cat assignation operator called" << std::endl;
	return (*this);
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() const
{
	std::cout << "MEOWRR!" << std::endl;
}