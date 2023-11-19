/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:14:51 by omansour          #+#    #+#             */
/*   Updated: 2023/11/19 14:22:33 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int value;
	static const int fractionalBits = 8;
public:
	Fixed();
	Fixed(const Fixed&);
	Fixed& operator=(const Fixed& other);
	~Fixed();

	Fixed(const int n);
	Fixed(const float n);
	float toFloat(void) const;
	int toInt(void) const;

	int	getRawBits(void) const;
	void setRawBits(int const raw);

	//02
	bool operator>(const Fixed& obj) const;
	bool operator<(const Fixed& obj) const;
	bool operator>=(const Fixed& obj);
	bool operator<=(const Fixed& obj);
	bool operator==(const Fixed& obj);
	bool operator!=(const Fixed& obj);

	Fixed operator+(const Fixed& obj);
	Fixed operator-(const Fixed& obj);
	Fixed operator*(const Fixed& obj);
	Fixed operator/(const Fixed& obj);

	Fixed&	operator++(void); // pre
	Fixed&	operator--(void);
	Fixed	operator++(int); // post
	Fixed	operator--(int);

	static Fixed&	min(Fixed& obj1, Fixed& obj2);
	static const Fixed&	min(const Fixed& obj1, const Fixed& obj2);
	static Fixed&	max(Fixed& obj1, Fixed& obj2);
	static const Fixed&	max(const Fixed& obj1, const Fixed& obj2);

};

std::ostream& operator<<(std::ostream& os, const Fixed& x);

#endif
