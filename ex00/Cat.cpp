#include "Cat.h"

Cat::Cat()
{
	type = "Cat";
	std::cout << "Cat constructor called\n";
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Cat copy constructor called\n";
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy operator assignment called\n";
	if (this != &other)
		this->type =  other.type;
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called\n";
}

void Cat::makeSound(void) const
{
	std::cout << "Meow~\n";
}