#include "Cat.hpp"

#include <iostream>

Cat::Cat() : Animal("Cat")
{
	brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(Cat const &cat) : Animal(cat)
{
	std::cout << "Cat copy constructor called" << std::endl;
	brain = new Brain(*cat.brain);
}

Cat &Cat::operator=(Cat const &cat)
{
	std::cout << "Cat assignation operator called" << std::endl;
	Animal::operator=(cat);
	delete brain;
	brain = new Brain(*cat.brain);
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