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
		// Incrementation and Decrementation operators
		Fixed &operator++(void);
		Fixed operator++(int);
		Fixed &operator--(void);
		Fixed operator--(int);
		// Arithmetic operators
		Fixed operator*(const Fixed &other);
		Fixed operator/(const Fixed &other);
		// Binary operators
		bool operator<(const Fixed &rhs) const;
		bool operator>(const Fixed &rhs) const;
		bool operator<=(const Fixed &rhs) const;
		bool operator>=(const Fixed &rhs) const;
		bool operator==(const Fixed &rhs) const;
		bool operator!=(const Fixed &rhs) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		float toInt(void) const;
		static Fixed min(const Fixed &a, const Fixed &b);
		static Fixed min(Fixed &a, Fixed &b);
		static Fixed max(const Fixed &a, const Fixed &b);
		static Fixed max(Fixed &a, Fixed &b);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

# endif