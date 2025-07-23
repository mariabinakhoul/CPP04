
#include "WrongCat.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
    delete j;
    delete i;

    std::cout << "\n---- WRONG ANIMALS ----" << std::endl;
    const WrongAnimal* wrong = new WrongAnimal();
    const WrongAnimal* wrongCat = new WrongCat();

    std::cout << "Type of wrongCat: " << wrongCat->getType() << std::endl;

    wrong->makeSound();     // WrongAnimal sound
    wrongCat->makeSound();  // Still WrongAnimal sound due to missing virtual

    delete wrong;
    delete wrongCat;

    std::cout << "\n---- EXTRA TESTS ----" << std::endl;
    Dog dog1;
    Dog dog2(dog1);
    Dog dog3;
    dog3 = dog1;

    Cat cat1;
    Cat cat2(cat1);
    Cat cat3;
    cat3 = cat1;
	return 0;
}