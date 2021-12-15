#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
    public:

        Fixed(int const n);
        ~Fixed(void);
		Fixed(Fixed& const fixed_copy);
		Fixed&	operator=(Fixed& const fixed_copy);
		Fixed	operator+(Fixed& const fixed_copy) const;

    private:

		int _n;

};

std::ostream & operator<<(std::ostream & o, Fixed& const fixed_copy);

#endif