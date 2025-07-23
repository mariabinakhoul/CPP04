#ifndef DOG_H
#define DOG_H


#include "Animal.h"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const Dog&);
		Dog &operator=(const Dog&);
		~Dog();
		void makeSound(void) const;
};

#endif