#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
    public:

        Karen(void);
        ~Karen(void);
		void complain(std::string level);
		

    private:

		void _debug(void);
		void _info(void);
		void _warning(void);
		void _error(void);
		void (Karen::*_tab[4])(void);

};

#endif