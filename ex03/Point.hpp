#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;
		int value;
		static const int nbBits;

	public:
		Point();
		~Point();
		Point(const Point &f);
		Point(const int value);
		Point(const float value);
		Point &operator=(const Point &other);
		// Incrementation and Decrementation operators
		Point &operator++(void);
		Point operator++(int);
		Point &operator--(void);
		Point operator--(int);
		// Arithmetic operators
		Point operator*(const Point &other);
		Point operator/(const Point &other);
		Point operator+(const Point &other);
		Point operator-(const Point &other);
		// Binary operators
		bool operator<(const Point &rhs) const;
		bool operator>(const Point &rhs) const;
		bool operator<=(const Point &rhs) const;
		bool operator>=(const Point &rhs) const;
		bool operator==(const Point &rhs) const;
		bool operator!=(const Point &rhs) const;

		int getRawBits(void) const;
		void setRawBits(int const raw);
		float toFloat(void) const;
		float toInt(void) const;
		static Point min(const Point &a, const Point &b);
		static Point min(Point &a, Point &b);
		static Point max(const Point &a, const Point &b);
		static Point max(Point &a, Point &b);
};

std::ostream &operator<<(std::ostream &o, Point const &Point);

# endif