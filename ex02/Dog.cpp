#include "Dog.h"

Dog::Dog():brain(new Brain())
{
	type = "Dog";
	std::cout << "Dog constructor called\n";
}

Dog::Dog(const Dog& other):Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Dog copy constructor called\n";
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called\n";
	if (this != &other)
	{
		this->type = other.type;
		*brain = *other.brain;
	}
	return *this;
}

Dog::~Dog()
{
	delete brain;
	std::cout << "Dog destructor called\n";
}

void Dog::makeSound(void) const
{
	std::cout << "Woof~\n";
}

Brain* Dog::getBrain() const
{
	return brain;
}
