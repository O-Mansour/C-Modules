/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 22:43:49 by omansour          #+#    #+#             */
/*   Updated: 2024/01/23 16:46:45 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
void	easyfind(T ctr, int toFind)
{
	if (std::find(ctr.begin(), ctr.end(), toFind) != ctr.end())
		std::cout << "Element found" << std::endl;
	else
		throw std::runtime_error("Element doesn't exist");
}

#endif
