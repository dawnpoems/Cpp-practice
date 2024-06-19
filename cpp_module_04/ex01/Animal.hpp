#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>

class Animal
{
protected:
	std::string type;
public:
	Animal(/* args */);
	Animal(std::string const &type);
	Animal(Animal const &animal);
	Animal &operator=(Animal const &animal);
	virtual ~Animal();

	std::string getType() const;
	virtual void makeSound() const;
};

#endif