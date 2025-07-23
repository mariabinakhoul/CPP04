#ifndef DOG_H
#define DOG_H


#include "Animal.h"
#include "Brain.h"

class Dog : public Animal
{
	private:
		Brain* brain;
	public:
		Dog();
		Dog(const Dog&);
		Dog &operator=(const Dog&);
		~Dog();
		void makeSound(void) const;
		Brain* getBrain() const;
};

#endif