#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
    public:

        Cat(void);
        Cat(std::string type);
        Cat(Cat const &Cat_copy);
        virtual ~Cat(void);
        Cat &operator=(Cat const &Cat_copy);
        void makeSound(void) const;

    private:

        Brain *_brain;
};

#endif