#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): _type("WrongAnimal")
{
    std::cout << "WrongAnimal default constructor is called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type): _type(type)
{
    std::cout << "WrongAnimal constructor by string is called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &WrongAnimal_copy): _type(WrongAnimal_copy.get_type())
{
    std::cout << "WrongAnimal constructor by copy is called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &WrongAnimal_copy)
{
    std::cout << "WrongAnimal assignation operator is called" << std::endl;
    this->_type = WrongAnimal_copy.get_type();
    return (*this);
}

void    WrongAnimal::set_type(std::string type)
{
    this->_type = type;
    return ;
}

std::string WrongAnimal::get_type(void) const
{
    return _type;
}

void    WrongAnimal::makeSound(void) const
{
    std::cout << this->_type << " makes an indescribable sound" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
    std::cout << "WrongAnimal default destructor is called" << std::endl;
}