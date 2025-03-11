/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:32:55 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/11 12:32:57 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

const int Point::nbBits = 8;

Point::Point() 
{
  // std::cout << std::endl;
  // std::cout << "Default constructor called" << std::endl;
  this->value = 0;
}

Point::~Point() 
{
  // std::cout << "Destructor called" << std::endl;
}

Point::Point(const Point &f) 
{
  // std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Point::Point(const int value) 
{
  // std::cout << "Int constructor called" << std::endl;
  this->setRawBits(value << 8);
}

Point::Point(const float value) 
{
  // std::cout << "Float constructor called" << std::endl;
  this->setRawBits(roundf(value * (1 << nbBits)));
}

Point &Point::operator=(const Point &other) 
{
  // std::cout << "Copy assignment operator called" << std::endl;
  this->value = other.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &o, Point const &Point) 
{
  o << Point.toFloat();
  return (o);
}

// Pre-Increment
Point &Point::operator++(void) 
{
  this->setRawBits(this->getRawBits() + 1);
  return (*this);
}

// Post-Increment (int dummy, exist only to differentiate with pre-increment)
Point Point::operator++(int)
{
  Point temp(*this);

  this->setRawBits(this->getRawBits() + 1);
  return (temp);
}

// Pre-Decrement
Point &Point::operator--(void) 
{
  this->setRawBits(this->getRawBits() - 1);
  return (*this);
}

// Post-Decrement (int dummy, exist only to differentiate with pre-decrement)
Point Point::operator--(int)
{
  Point temp(*this);

  this->setRawBits(this->getRawBits() - 1);
  return (temp);
}

Point Point::operator*(const Point &other)
{
  return (this->toFloat() * other.toFloat());
}

Point Point::operator/(const Point &other)
{
  return (this->toFloat() / other.toFloat());
}

Point Point::operator+(const Point &other)
{
  return (this->toFloat() + other.toFloat());
}

Point Point::operator-(const Point &other)
{
  return (this->toFloat() - other.toFloat());
}

bool Point::operator<(const Point &rhs) const { return (this->value < rhs.value); }
bool Point::operator> (const Point &rhs) const { return ( rhs < *this); }
bool Point::operator<=(const Point &rhs) const { return !(*this > rhs); }
bool Point::operator>=(const Point &rhs) const { return !(*this < rhs); }
bool Point::operator==(const Point &rhs) const { return (this->value == rhs.value); }
bool Point::operator!=(const Point &rhs) const { return !(*this == rhs); }

void Point::setRawBits(int const raw) 
{ 
  this->value = raw; 
}

int Point::getRawBits(void) const 
{ 
  return (this->value); 
}

float Point::toFloat(void) const 
{
  return (this->getRawBits() / (float)(1 << nbBits));
}

float Point::toInt(void) const 
{ 
  return (this->getRawBits() >> nbBits); 
}

Point Point::max(const Point &a, const Point &b)
{
  if (a.toFloat() > b.toFloat())
    return (a);
  return (b);
}

Point Point::max(Point &a, Point &b)
{
  if (a.toFloat() > b.toFloat())
    return (a);
  return (b);
}

Point Point::min(const Point &a, const Point &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}

Point Point::min(Point &a, Point &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}