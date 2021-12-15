#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
    this->_type = "WrongCat";
    std::cout << "WrongCat default constructor is called" << std::endl;
}

WrongCat::WrongCat(std::string type)
{
    this->_type = type;
    std::cout << "WrongCat constructor by string is called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &WrongCat_copy)
{
    this->_type = WrongCat_copy.get_type();
    std::cout << "WrongCat constructor by copy is called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &WrongCat_copy)
{
    std::cout << "WrongCat assignation operator is called" << std::endl;
    this->_type = WrongCat_copy.get_type();
    return (*this);
}

void    WrongCat::makeSound(void) const
{
    std::cout << this->_type << " makes an indescribable sound" << std::endl;
}

WrongCat::~WrongCat(void)
{
    std::cout << "WrongCat default destructor is called" << std::endl;
}