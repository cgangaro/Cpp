#include "WrongDog.hpp"

WrongDog::WrongDog(void)
{
    this->_type = "WrongDog";
    std::cout << "WrongDog default constructor is called" << std::endl;
}

WrongDog::WrongDog(std::string type)
{
    this->_type = type;
    std::cout << "WrongDog constructor by string is called" << std::endl;
}

WrongDog::WrongDog(WrongDog const &WrongDog_copy)
{
    this->_type = WrongDog_copy.get_type();
    std::cout << "WrongDog constructor by copy is called" << std::endl;
}

WrongDog &WrongDog::operator=(WrongDog const &WrongDog_copy)
{
    std::cout << "WrongDog assignation operator is called" << std::endl;
    this->_type = WrongDog_copy.get_type();
    return (*this);
}

void    WrongDog::makeSound(void) const
{
    std::cout << this->_type << " makes an indescribable sound" << std::endl;
}

WrongDog::~WrongDog(void)
{
    std::cout << "Cat default destructor is called" << std::endl;
}