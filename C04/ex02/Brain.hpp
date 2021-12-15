#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    public:

        Brain(void);
        Brain(Brain const &Brain_copy);
        ~Brain(void);
        Brain &operator=(Brain const &Brain_copy);
        std::string get_idea(int id) const;
        void    set_idea(std::string idea, int id);
    
    private:

        std::string _ideas[100];
};

#endif