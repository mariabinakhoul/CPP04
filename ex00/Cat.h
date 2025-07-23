#ifndef CAT_H
#define CAT_H


#include "Animal.h"

class Cat : public Animal
{
	public:
		Cat();
		Cat(const Cat&);
		Cat &operator=(const Cat&);
		~Cat();
		void makeSound(void) const;
};

#endif