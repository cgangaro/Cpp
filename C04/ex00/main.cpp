#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << "j type: " << j->get_type() << std::endl;
    std::cout << "i type: " << i->get_type() << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    
    delete meta;
    delete j;
    delete i;

    const WrongAnimal* meta2 = new WrongAnimal();
    const WrongAnimal* j2 = new WrongDog();
    const WrongAnimal* i2 = new WrongCat();

    std::cout << "j2 type: " << j2->get_type() << std::endl;
    std::cout << "i2 type: " << i2->get_type() << std::endl;
    i2->makeSound();
    j2->makeSound();
    meta2->makeSound();
    
    delete meta2;
    delete j2;
    delete i2;
    return 0;
}