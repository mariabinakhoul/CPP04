#include "WrongAnimal.h"

WrongAnimal::WrongAnimal():type("WrongAnimal")
{
	std::cout << "WrongAnimal constructor called\n";
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal Copy Constructor called\n";
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other)
{
	std::cout << "WrongAnimal copy assignment operator called\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called\n";
}

std::string WrongAnimal::getType() const
{
	return type;
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimal makes wrong sound\n";
}