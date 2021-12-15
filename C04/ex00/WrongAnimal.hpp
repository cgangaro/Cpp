#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    public:

        WrongAnimal(void);
        WrongAnimal(std::string type);
        WrongAnimal(WrongAnimal const &WrongAnimal_copy);
        virtual ~WrongAnimal(void);
        WrongAnimal &operator=(WrongAnimal const &WrongAnimal_copy);
        virtual void makeSound(void) const;
        void    set_type(std::string _type);
        std::string get_type(void) const;
    
    protected:

        std::string _type;
};

#endif