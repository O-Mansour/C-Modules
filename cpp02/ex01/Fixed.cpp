/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:34 by omansour          #+#    #+#             */
/*   Updated: 2023/11/18 18:25:50 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value (0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& x)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = x;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
		value = other.value;
	return *this;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;	
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;	
	value = raw;
}

Fixed::Fixed(const int n)
{
	std::cout << "Int constructor called" << std::endl;
	value = n * (1 << fractionalBits);
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	value = roundf(n * (1 << fractionalBits));
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(value) / (1 << fractionalBits));
}

int Fixed::toInt(void) const
{
	return (value / (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return os;
}
