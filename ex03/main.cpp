/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ppontet <ppontet@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 16:30:31 by ppontet           #+#    #+#             */
/*   Updated: 2025/03/11 12:31:31 by ppontet          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

typedef struct s_coords
{
	Fixed x;
	Fixed y;
} t_coords;

// Mandatory
int main(void)
{
	t_coords O;

	O.x.setRawBits((4 << 8) + 0b1);
	O.y.setRawBits((1 << 8) + 0b10);
	std::cout << "O[" << O.x << ", " << O.y << "]" << std::endl;

	t_coords W;

	W.x.setRawBits(0b1111111);
	W.y.setRawBits(0b1111111);
	std::cout << "W[" << W.x << ", " << W.y << "]" << std::endl;

	t_coords A;
	t_coords B;
	t_coords C;

	A.x.setRawBits((0 << 8));
	A.y.setRawBits((0 << 8));
	B.x.setRawBits((0 << 8));
	B.y.setRawBits((2 << 8));
	C.x.setRawBits((1 << 8));
	C.y.setRawBits((1 << 8));
	std::cout << "Soit un triangle defini par les points ABC :" << std::endl;
	std::cout << "A[" << A.x << ", " << A.y << "]" << std::endl;
	std::cout << "B[" << B.x << ", " << B.y << "]" << std::endl;
	std::cout << "C[" << C.x << ", " << C.y << "]" << std::endl;
	return 0;
}
