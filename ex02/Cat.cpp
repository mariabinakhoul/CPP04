#include "Cat.h"

Cat::Cat():brain(new Brain())
{
	type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other), brain(new Brain(*other.brain))
{
	std::cout << "Cat copy constructor called\n";
	type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy operator assignment called\n";
	if (this != &other)
	{
		this->type = other.type;
		*brain = *other.brain;
	}
	return *this;
}

Cat::~Cat()
{
	delete brain;
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~\n";
}

Brain* Cat::getBrain() const
{
	return brain;
}
