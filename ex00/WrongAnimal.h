#ifndef WRONGANIMAL_H
#define WRONGANIMAL_H

#include <iostream>
#include <string.h>

class WrongAnimal
{
	protected:
		std::string type;

	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal&);
		WrongAnimal& operator=(const WrongAnimal&);
		virtual ~WrongAnimal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif