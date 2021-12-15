#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
    public:

        Fixed(void);
        ~Fixed(void);
		Fixed(Fixed const &fixed_copy);
		Fixed &operator=(Fixed const &fixed_copy);
		int	getRawBits(void) const;
		void	setRawBits(int const raw);

    private:

		int _n;
		static int const raw = 8;

};

#endif