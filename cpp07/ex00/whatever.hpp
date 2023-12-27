/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:04:12 by omansour          #+#    #+#             */
/*   Updated: 2023/12/25 23:35:06 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void	swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T const & min(T const & a, T const & b) 
{
	return ((a < b) ? a : b);
}

template <typename T>
T const & max(T const & a, T const & b) 
{
	return ((a > b) ? a : b);
}

#endif
