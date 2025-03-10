#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int value;
		static const int nbBits;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed(const int value);
		Fixed(const float value);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		float toInt(void) const;
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

# endif