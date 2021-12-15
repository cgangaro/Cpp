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
		Fixed &operator++(void);
		Fixed &operator--(void);
		Fixed operator++(int);
		Fixed operator--(int);
		bool operator>(Fixed const &fixed_copy) const;
		bool operator<(Fixed const &fixed_copy) const;
		bool operator>=(Fixed const &fixed_copy) const;
		bool operator<=(Fixed const &fixed_copy) const;
		bool operator==(Fixed const &fixed_copy) const;
		bool operator!=(Fixed const &fixed_copy) const;
		Fixed operator+(Fixed const &fixed_copy) const;
		Fixed operator-(Fixed const &fixed_copy) const;
		Fixed operator*(Fixed const &fixed_copy) const;
		Fixed operator/(Fixed const &fixed_copy) const;
		static Fixed	&min(Fixed &a, Fixed &b);
		const static Fixed	&min(const Fixed &a, const Fixed &b);
		static Fixed	&max(Fixed &a, Fixed &b);
		const static Fixed	&max(const Fixed &a, const Fixed &b);
		int toInt(void) const;
		float toFloat(void) const;
		int	getRawBits(void) const;
		void setRawBits(int const);
		int	getFixedPoint(void) const;

    private:

		int _fixed_point;
		static int const _raw = 16;

};

std::ostream &operator<<(std::ostream &out, Fixed const &fixed);

#endif