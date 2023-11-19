/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 14:43:32 by omansour          #+#    #+#             */
/*   Updated: 2023/11/19 14:11:26 by omansour         ###   ########.fr       */
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
};

std::ostream& operator<<(std::ostream& os, const Fixed& x);

#endif
