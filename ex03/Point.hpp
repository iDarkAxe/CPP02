#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point{
	private:
		Fixed const x;
		Fixed const y;

	public:
		Point();
		~Point();
		Point(const Point &f);
		Point(const int x_value, const int y_value);
		Point(const float x_value, const float y_value);
		Point &operator=(const Point &other);

		bool operator==(const Point &rhs) const;

		Fixed getX(void);
		Fixed getY(void);
};

std::ostream &operator<<(std::ostream &o, Point const &Point);

# endif