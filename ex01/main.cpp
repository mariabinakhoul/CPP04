#include "Animal.h"
#include "Dog.h"
#include "Cat.h"
#include "WrongAnimal.h"
#include "WrongCat.h"

int main()
{
	std::cout << "<----- Constructors ----->\n" << std::endl;

	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const Animal* animal = new Animal();

	std::cout << "\n<------ Get Type ------->\n" << std::endl;

	std::cout << "Type 1: " << cat->getType() << std::endl;
	std::cout << "Type 2: " << dog->getType() << std::endl;
	std::cout << "Type 3: " << animal->getType() << std::endl;

	std::cout << "\n<------- Sounds --------->\n" << std::endl;

	cat->makeSound();
	dog->makeSound();
	animal->makeSound();

	std::cout << "\n<----- Destructors ----->\n" << std::endl;

	delete animal;
	delete cat;
	delete dog;

	// WrongAnimal part
	std::cout << "\n----- Wrong Animals -----\n" << std::endl;

	std::cout << "<----- Constructors ----->\n" << std::endl;

	const WrongAnimal* wcat = new WrongCat();
	const WrongAnimal* wanimal = new WrongAnimal();

	std::cout << "\n<------ Get Type ------->\n" << std::endl;

	std::cout << "Type 1: " << wcat->getType() << std::endl;
	std::cout << "Type 3: " << wanimal->getType() << std::endl;

	std::cout << "\n<------- Sounds --------->\n" << std::endl;

	wcat->makeSound();      // won't call WrongCat's makeSound if not virtual
	wanimal->makeSound();

	std::cout << "\n<----- Destructors ----->\n" << std::endl;

	delete wanimal;
	delete wcat;

	return 0;
}
