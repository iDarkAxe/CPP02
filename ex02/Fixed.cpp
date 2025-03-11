/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:28:12 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/11 11:59:52 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

const int Fixed::nbBits = 8;

Fixed::Fixed() 
{
  // std::cout << std::endl;
  // std::cout << "Default constructor called" << std::endl;
  this->value = 0;
}

Fixed::~Fixed() 
{
  // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f) 
{
  // std::cout << "Copy constructor called" << std::endl;
  *this = f;
}

Fixed::Fixed(const int value) 
{
  // std::cout << "Int constructor called" << std::endl;
  this->setRawBits(value << 8);
}

Fixed::Fixed(const float value) 
{
  // std::cout << "Float constructor called" << std::endl;
  this->setRawBits(roundf(value * (1 << nbBits)));
}

Fixed &Fixed::operator=(const Fixed &other) 
{
  // std::cout << "Copy assignment operator called" << std::endl;
  this->value = other.getRawBits();
  return (*this);
}

std::ostream &operator<<(std::ostream &o, Fixed const &fixed) 
{
  o << fixed.toFloat();
  return (o);
}

// Pre-Increment
Fixed &Fixed::operator++(void) 
{
  this->setRawBits(this->getRawBits() + 1);
  return (*this);
}

// Post-Increment (int dummy, exist only to differentiate with pre-increment)
Fixed Fixed::operator++(int)
{
  Fixed temp(*this);

  this->setRawBits(this->getRawBits() + 1);
  return (temp);
}

// Pre-Decrement
Fixed &Fixed::operator--(void) 
{
  this->setRawBits(this->getRawBits() - 1);
  return (*this);
}

// Post-Decrement (int dummy, exist only to differentiate with pre-decrement)
Fixed Fixed::operator--(int)
{
  Fixed temp(*this);

  this->setRawBits(this->getRawBits() - 1);
  return (temp);
}

Fixed Fixed::operator*(const Fixed &other)
{
  return (this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed &other)
{
  return (this->toFloat() / other.toFloat());
}

bool Fixed::operator<(const Fixed &rhs) const { return (this->value < rhs.value); }
bool Fixed::operator> (const Fixed &rhs) const { return ( rhs < *this); }
bool Fixed::operator<=(const Fixed &rhs) const { return !(*this > rhs); }
bool Fixed::operator>=(const Fixed &rhs) const { return !(*this < rhs); }
bool Fixed::operator==(const Fixed &rhs) const { return (this->value == rhs.value); }
bool Fixed::operator!=(const Fixed &rhs) const { return !(*this == rhs); }

void Fixed::setRawBits(int const raw) 
{ 
  this->value = raw; 
}

int Fixed::getRawBits(void) const 
{ 
  return (this->value); 
}

float Fixed::toFloat(void) const 
{
  return (this->getRawBits() / (float)(1 << nbBits));
}

float Fixed::toInt(void) const 
{ 
  return (this->getRawBits() >> nbBits); 
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() > b.toFloat())
    return (a);
  return (b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
  if (a.toFloat() > b.toFloat())
    return (a);
  return (b);
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
  if (a.toFloat() < b.toFloat())
    return (a);
  return (b);
}