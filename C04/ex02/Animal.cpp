#include "Animal.hpp"

Animal::Animal(void): _type("Animal")
{
    std::cout << "Animal default constructor is called" << std::endl;
}

Animal::Animal(std::string type): _type(type)
{
    std::cout << "Animal constructor by string is called" << std::endl;
}

Animal::Animal(Animal const &Animal_copy): _type(Animal_copy.get_type())
{
    std::cout << "Animal constructor by copy is called" << std::endl;
}

Animal &Animal::operator=(Animal const &Animal_copy)
{
    std::cout << "Animal assignation operator is called" << std::endl;
    this->_type = Animal_copy.get_type();
    return (*this);
}

void    Animal::set_type(std::string type)
{
    this->_type = type;
    return ;
}

std::string Animal::get_type(void) const
{
    return _type;
}

void    Animal::makeSound(void) const
{
    std::cout << this->_type << " makes an indescribable sound" << std::endl;
}

Animal::~Animal(void)
{
    std::cout << "Animal default destructor is called" << std::endl;
}