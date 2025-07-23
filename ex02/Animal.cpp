#include "Animal.h"

Animal::Animal() : type("Animal")
{
	std::cout << "Animal constructor called\n";
}

Animal::Animal (const Animal& other) : type(other.type)
{
	std::cout << "Animal constructor called\n";
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operaor called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

std::string Animal::getType() const
{
	return (type);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called\n";
}

void Animal::makeSound(void) const
{
	std::cout << "Animal makes a generic sound\n";
}