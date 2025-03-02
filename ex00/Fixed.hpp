#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
	private:
		int value;
		static const int nbBits = 8;

	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed &operator=(const Fixed &other);

		int getRawBits(void) const; 
};

# endif
