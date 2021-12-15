#include "Cat.hpp"

Cat::Cat(void): Animal()
{
    this->_type = "Cat";
    std::cout << "Cat default constructor is called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
    this->_type = type;
    std::cout << "Cat constructor by string is called" << std::endl;
}

Cat::Cat(Cat const &Cat_copy): Animal(Cat_copy)
{
    this->_type = Cat_copy.get_type();
    std::cout << "Cat constructor by copy is called" << std::endl;
}

Cat &Cat::operator=(Cat const &Cat_copy)
{
    std::cout << "Cat assignation operator is called" << std::endl;
    this->_type = Cat_copy.get_type();
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << this->_type << "miaou" << std::endl;
}

Cat::~Cat(void)
{
    std::cout << "Cat default destructor is called" << std::endl;
}