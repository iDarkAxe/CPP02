/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 18:12:57 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/08 16:27:39 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Mandatory
int main(void)
{
	Fixed a;
	Fixed b( a );
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return (0);
}

// More tests
// int main(void)
// {
// 	Fixed a;
// 	Fixed b( a );
// 	Fixed c;
// 	std::cout << std::endl;
// 	std::cout << "\tb value modified to 10" << std::endl;
// 	b.setRawBits(10);
// 	c = b;
// 	std::cout << "\tb value modified to 50"<< std::endl;
// 	b.setRawBits(50);
// 	std::cout << a.getRawBits() << " is from a"<< std::endl;
// 	std::cout << b.getRawBits() << " is from b"<< std::endl;
// 	std::cout << c.getRawBits() << " is from c"<< std::endl;
// 	std::cout << std::endl << "c value != b value because '=' sign copies value not pointers" << std::endl;
// 	return (0);
// }
