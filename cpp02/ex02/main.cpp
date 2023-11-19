/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:14:48 by omansour          #+#    #+#             */
/*   Updated: 2023/11/19 19:19:26 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl;

	// For TesTin...

	// Fixed x(6);
	// Fixed p(9);
	// Fixed z = p;

	// // Comparison
	// std::cout << (x > p) << std::endl; // 0
	// std::cout << (p >= z) << std::endl; // 1
	// std::cout << (p < z) << std::endl; // 0
	// std::cout << (x <= p) << std::endl; // 1
	// std::cout << (p == z) << std::endl; // 1
	// std::cout << (x != z) << std::endl; // 1

	// // Arithmetic
	// std::cout << x + z << std::endl; // 15
	// std::cout << x - z << std::endl; // -3
	// std::cout << x * z << std::endl; // 54
	// std::cout << p / z << std::endl; // 1

	// // In/De crement
	// std::cout << ++z << std::endl;
	// std::cout << z << std::endl;
	// std::cout << z++ << std::endl;
	// std::cout << z << std::endl;
	
	// // min-max
	// std::cout << Fixed::min(x, p) << std::endl;
	// std::cout << Fixed::max(x, z) << std::endl;

	return 0;
}
