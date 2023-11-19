/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:14:54 by omansour          #+#    #+#             */
/*   Updated: 2023/11/19 14:29:42 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value (0)
{
}

Fixed::Fixed(const Fixed& x)
{
	*this = x;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		value = other.value;
	return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits(void) const
{
	return this->value;
}

void Fixed::setRawBits(int const raw)
{
	value = raw;
}

Fixed::Fixed(const int n)
{
	value = n * (1 << fractionalBits);
}

Fixed::Fixed(const float n)
{
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
