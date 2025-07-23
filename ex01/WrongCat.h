#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.h"


class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		WrongCat(const WrongCat&);
		WrongCat&  operator=(const WrongCat&);
		~WrongCat();
		void makeSound() const;
};

#endif