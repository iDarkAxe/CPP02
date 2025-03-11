/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/11 12:32:55 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/11 14:29:56 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <cmath>

Point::Point() : x(0), y(0)
{
  ;
}

Point::~Point() 
{
  ;
}

Point::Point(const Point &f) : x(f.x), y(f.y)
{
  ;
}

Point::Point(const int x_value, const int y_value) : x(x_value), y(y_value)
{
  ;
}

Point::Point(const float x_value, const float y_value) : x(x_value), y(y_value) 
{
  ;
}

Point &Point::operator=(const Point &other)
{
  // Can't modify x and y as they are const
  (void)other;
  return (*this);
}

bool Point::operator==(const Point &rhs) const
{ 
  if (this->x == rhs.x && this->y == rhs.y)
    return (1);
  return (0);
}

Fixed Point::getX(void)
{
  return (this->x);
}
Fixed Point::getY(void)
{
  return (this->y);
}
