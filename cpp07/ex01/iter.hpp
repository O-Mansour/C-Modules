/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:42:36 by omansour          #+#    #+#             */
/*   Updated: 2023/12/28 00:24:27 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <cstdlib>

template <typename T>
void iter(T* array, size_t length, void (*func)(T&))
{
	if (!func || !array)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

template <typename T>
void iter(const T* array, size_t length, void (*func)(T const &))
{
	if (!func || !array)
		return ;
	for (size_t i = 0; i < length; i++)
		func(array[i]);
}

#endif
