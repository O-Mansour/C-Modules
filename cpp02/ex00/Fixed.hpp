/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 12:23:31 by omansour          #+#    #+#             */
/*   Updated: 2023/11/18 16:58:48 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

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

	int	getRawBits(void) const;
	void setRawBits(int const raw);
};

#endif
