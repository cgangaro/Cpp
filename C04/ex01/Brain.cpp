#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "Brain default constructor is called" << std::endl;
}

Brain::Brain(Brain const &Brain_copy)
{
    std::cout << "Brain constructor by copy is called" << std::endl;
    for (int i=0; i < 100; i++)
        this->_ideas[i] = Brain_copy._ideas[i];
}

Brain &Brain::operator=(Brain const &Brain_copy)
{
    std::cout << "Brain assignation operator is called" << std::endl;
    for (int i=0; i < 100; i++)
        this->_ideas[i] = Brain_copy._ideas[i];
    return (*this);
}

void    Brain::set_idea(std::string idea, int id)
{
    if (id < 100 && id >= 0)
        this->_ideas[id] = idea;
    return ;
}

std::string Brain::get_idea(int id) const
{
    if (id < 100 && id >= 0)
        return _ideas[id];
    else
        return ("ERROR");
}

Brain::~Brain(void)
{
    std::cout << "Brain default destructor is called" << std::endl;
}