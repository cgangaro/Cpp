#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP

#include "WrongAnimal.hpp"

class WrongDog: public WrongAnimal
{
    public:

        WrongDog(void);
        WrongDog(std::string type);
        WrongDog(WrongDog const &WrongDog_copy);
        virtual ~WrongDog(void);
        WrongDog &operator=(WrongDog const &WrongDog_copy);
        void makeSound(void) const;
};

#endif