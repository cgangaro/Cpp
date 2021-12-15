#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
    public:

        Dog(void);
        Dog(std::string type);
        Dog(Dog const &Dog_copy);
        virtual ~Dog(void);
        Dog &operator=(Dog const &Dog_copy);
        void makeSound(void) const;
    
    private:

        Brain *_brain;
};

#endif