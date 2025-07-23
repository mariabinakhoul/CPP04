#include "WrongCat.h"

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "WrongCat constructor called\n";
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	std::cout << "WrongCat copy constructor called\n";
}

WrongCat&  WrongCat::operator=(const WrongCat& other)
{
	std::cout << "WrongCat copy assignment operator\n";
	if (this != &other)
		this->type = other.type;
	return *this;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called\n";
}

void WrongCat::makeSound() const
{
	std::cout << "Miaou?\n";
}