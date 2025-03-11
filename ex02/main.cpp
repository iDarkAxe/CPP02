/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:31 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/11 11:58:17 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Mandatory
// int main( void )
// {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return 0;
// }

// More tests
int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c;
	std::cout << a << std::endl;
	std::cout << "pre-increment" << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << "post-increment" << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	std::cout << "Decrementation testing" << std::endl;
	std::cout << a << std::endl;
	std::cout << "pre-decrement" << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << "post-decrement" << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;

	std::cout << std::endl;
	std::cout << "Maximum testing" << std::endl;
	std::cout << Fixed::max(Fixed(24), Fixed(23.4f)) << std::endl;
	std::cout << Fixed::max(Fixed(24), Fixed(25.4f)) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::max( b, a ) << std::endl;

	std::cout << std::endl;
	std::cout << "Minimum testing" << std::endl;
	std::cout << Fixed::min(Fixed(24), Fixed(23.4f)) << std::endl;
	std::cout << Fixed::min(Fixed(24), Fixed(25.4f)) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::min( b, a ) << std::endl;

	std::cout << std::endl;
	std::cout << "Comparison operators" << std::endl;
	std::cout << "Is a < b : " << (a < b) << std::endl;
	std::cout << "Is a > b : " << (a > b) << std::endl;
	std::cout << "Is a <= b : " << (a <= b) << std::endl;
	std::cout << "Is a >= b : " << (a >= b) << std::endl;
	std::cout << "More tests" << std::endl;
	std::cout << "Is a <= a : " << (a <= a) << std::endl;
	std::cout << "Is a >= a : " << (a >= a) << std::endl;
	std::cout << "Is a == b : " << (a == b) << std::endl;
	std::cout << "Is a == a : " << (a == a) << std::endl;
	std::cout << "Is a != b : " << (a != b) << std::endl;
	
	std::cout << std::endl;
	std::cout << "Arithmetic operators" << std::endl;
	a = Fixed(10);
	c = Fixed(20.40f);
	// std::cout << (a + c) << std::endl;
	// std::cout << (a - c) << std::endl;
	std::cout << (a * c) << std::endl;
	std::cout << (c / a) << std::endl;

	return 0;
}
