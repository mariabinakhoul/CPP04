#include "Dog.h"

Dog::Dog()
{
	type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& other):Animal(other)
{
	std::cout << "Dog copy constructor called\n";
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Woof~\n";
}