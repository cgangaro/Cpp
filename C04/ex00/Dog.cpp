#include "Dog.hpp"

Dog::Dog(void): Animal()
{
    this->_type = "Dog";
    std::cout << "Dog default constructor is called" << std::endl;
}

Dog::Dog(std::string type): Animal(type)
{
    this->_type = type;
    std::cout << "Dog constructor by string is called" << std::endl;
}

Dog::Dog(Dog const &Dog_copy): Animal(Dog_copy)
{
    this->_type = Dog_copy.get_type();
    std::cout << "Dog constructor by copy is called" << std::endl;
}

Dog &Dog::operator=(Dog const &Dog_copy)
{
    std::cout << "Dog assignation operator is called" << std::endl;
    this->_type = Dog_copy.get_type();
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << this->_type << "wouaf" << std::endl;
}

Dog::~Dog(void)
{
    std::cout << "Dog default destructor is called" << std::endl;
}