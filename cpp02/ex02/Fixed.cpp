/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:14:54 by omansour          #+#    #+#             */
/*   Updated: 2023/11/18 21:11:59 by omansour         ###   ########.fr       */
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

bool Fixed::operator>(const Fixed& obj) const
{
	if (value > obj.value)
		return true;
	return false;	
}

bool Fixed::operator<(const Fixed& obj) const
{
	if (value < obj.value)
		return true;
	return false;	
}

bool Fixed::operator>=(const Fixed& obj)
{
	if (value >= obj.value)
		return true;
	return false;	
}

bool Fixed::operator<=(const Fixed& obj)
{
	if (value <= obj.value)
		return true;
	return false;	
}

bool Fixed::operator==(const Fixed& obj)
{
	if (value == obj.value)
		return true;
	return false;	
}

bool Fixed::operator!=(const Fixed& obj)
{
	if (value != obj.value)
		return true;
	return false;	
}

Fixed Fixed::operator+(const Fixed& obj)
{
	Fixed o;
	o.value = value + obj.value;
	return o;
}


Fixed Fixed::operator-(const Fixed& obj)
{
	Fixed o;
	o.value = value - obj.value;
	return o;
}

Fixed Fixed::operator*(const Fixed& obj)
{
	Fixed o(this->toFloat() * obj.toFloat());
	return o;
}

Fixed Fixed::operator/(const Fixed& obj)
{
	Fixed o(this->toFloat() / obj.toFloat());
	return o;
}

Fixed&	Fixed::operator++(void) // pre
{
	value++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed obj (*this);
	value++;
	return obj;
}

Fixed&	Fixed::operator--(void) // pre
{
	value--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed obj (*this);
	value--;
	return obj;
}

Fixed&	Fixed::min(Fixed& obj1, Fixed& obj2)
{
	if (obj1 > obj2)
		return obj2;
	return obj1;
}

const Fixed&	Fixed::min(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 > obj2)
		return obj2;
	return obj1;
}

Fixed&	Fixed::max(Fixed& obj1, Fixed& obj2)
{
	if (obj1 < obj2)
		return obj2;
	return obj1;
}

const Fixed&	Fixed::max(const Fixed& obj1, const Fixed& obj2)
{
	if (obj1 < obj2)
		return obj2;
	return obj1;
}
