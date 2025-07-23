#ifndef ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string.h>


class Animal
{
	protected:
		std::string type;

	public:
		Animal();
		Animal (const Animal&);
		Animal &operator=(const Animal&);
		std::string getType() const;
		virtual ~Animal();
		virtual void makeSound(void) const = 0;
};


#endif