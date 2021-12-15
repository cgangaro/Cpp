#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
    const Animal *j = new Dog();
    const Animal *i = new Cat();

    Dog num1("Bob");
    std::cout << std::endl;

    std::cout << "test" << std::endl;
    Dog temp = num1;
    std::cout << std::endl;

    num1.makeSound();
    temp.makeSound();
    delete j;
    delete i;
    return 0;
}