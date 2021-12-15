#include "Cat.hpp"

Cat::Cat(void): Animal(), _brain(new Brain())
{
    this->_type = "Cat";
    std::cout << "Cat default constructor is called" << std::endl;
}

Cat::Cat(std::string type): Animal(type)
{
    this->_type = type;
    std::cout << "Cat constructor by string is called" << std::endl;
}

Cat::Cat(Cat const &Cat_copy): Animal(Cat_copy), _brain(new Brain())
{
    this->_type = Cat_copy.get_type();
    for (int i=0; i < 100; i++)
        this->_brain->set_idea(Cat_copy._brain->get_idea(i), i);
    std::cout << "Cat constructor by copy is called" << std::endl;
}

Cat &Cat::operator=(Cat const &Cat_copy)
{
    std::cout << "Cat assignation operator is called" << std::endl;
    this->_type = Cat_copy.get_type();
    for (int i=0; i < 100; i++)
        this->_brain->set_idea(Cat_copy._brain->get_idea(i), i);
    return (*this);
}

void    Cat::makeSound(void) const
{
    std::cout << this->_type << " miaou" << std::endl;
}

Cat::~Cat(void)
{
    delete _brain;
    std::cout << "Cat default destructor is called" << std::endl;
}