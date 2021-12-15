#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>
#include <iostream>
#include <cmath>

class Fixed
{
    public:

        Fixed(void);
		Fixed(const int arg);
		Fixed(const float arg);
        ~Fixed(void);
		Fixed(Fixed const &fixed_copy);
		Fixed &operator=(Fixed const &fixed_copy);
		int toInt(void) const;
		float toFloat(void) const;
		int	getRawBits(void) const;
		int	getFixedPoint(void) const;

    private:

		int _fixed_point;
		static int const _raw = 16;

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif