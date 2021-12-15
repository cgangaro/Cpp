#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    public:

        Animal(void);
        Animal(std::string type);
        Animal(Animal const &Animal_copy);
        virtual ~Animal(void);
        Animal &operator=(Animal const &Animal_copy);
        virtual void makeSound(void) const = 0;
        void    set_type(std::string _type);
        std::string get_type(void) const;
    
    protected:

        std::string _type;
};

#endif