/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:31 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/10 17:06:03 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Mandatory
int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}

// More tests
// int main(void)
// {
// 	Fixed a;
// 	Fixed b( 10 );
// 	Fixed c( 42.42f );
// 	Fixed const d( b );
// 	a = Fixed( 1234.4321f );
// 	std::cout << "\tb value modified to 10 (int)" << std::endl;
// 	b.setRawBits(10 << 8);
// 	c = b;
// 	std::cout << "\tb value modified to 50 (int)"<< std::endl;
// 	b.setRawBits(50 << 8);
// 	std::cout << "a is " << a << std::endl;
// 	std::cout << "b is " << b << std::endl;
// 	std::cout << "c is " << c << std::endl;
// 	std::cout << "d is " << d << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
// 	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
// 	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
// 	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
// 	std::cout << std::endl;
// 	std::cout << "a is " << a.toFloat() << " as float" << std::endl;
// 	std::cout << "b is " << b.toFloat() << " as float" << std::endl;
// 	std::cout << "c is " << c.toFloat() << " as float" << std::endl;
// 	std::cout << "d is " << d.toFloat() << " as float" << std::endl;
// 	return (0);
// }
