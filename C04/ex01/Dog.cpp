#include "Dog.hpp"

Dog::Dog(void): Animal(), _brain(new Brain())
{
    this->_type = "Dog";
    std::cout << "Dog default constructor is called" << std::endl;
}

Dog::Dog(std::string type): Animal(type), _brain(new Brain())
{
    this->_type = type;
    std::cout << "Dog constructor by string is called" << std::endl;
}

Dog::Dog(Dog const &Dog_copy): Animal(Dog_copy), _brain(new Brain())
{
    this->_type = Dog_copy._type;
    for (int i=0; i < 100; i++)
        this->_brain->set_idea(Dog_copy._brain->get_idea(i), i);
    std::cout << "Dog constructor by copy is called" << std::endl;
}

Dog &Dog::operator=(Dog const &Dog_copy)
{
    std::cout << "Dog assignation operator is called" << std::endl;
    this->_type = Dog_copy.get_type();
    for (int i=0; i < 100; i++)
        this->_brain->set_idea(Dog_copy._brain->get_idea(i), i);
    return (*this);
}

void    Dog::makeSound(void) const
{
    std::cout << this->_type << " wouaf" << std::endl;
}

Dog::~Dog(void)
{
     delete _brain;
    std::cout << "Dog default destructor is called" << std::endl;
}