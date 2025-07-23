#ifndef CAT_H
#define CAT_H


#include "Animal.h"
#include "Brain.h"


class Cat : public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		Cat(const Cat&);
		Cat &operator=(const Cat&);
		~Cat();
		void makeSound(void) const;
		Brain* getBrain() const;
};

#endif