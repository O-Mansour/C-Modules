/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:02:08 by omansour          #+#    #+#             */
/*   Updated: 2024/02/10 02:30:48 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	sort_elts(std::vector<unsigned int> &Vec)
{
	
}

int main(int ac, char const *av[])
{
	if (ac == 1)
		return 1;
	// parse, fill containers
	std::vector<unsigned int> Vec;
	std::deque<unsigned int> Deq;
	for (int i = 1; i < ac; i++)
	{
		check_arg(av[i]);
		Vec.push_back(convert_arg(av[i]));
		Deq.push_back(convert_arg(av[i]));
	}
	std::cout << "Before: ";
	for (size_t i = 0; i < Vec.size(); i++)
		std::cout << Vec[i] << " ";
	std::cout << std::endl;
	// sort containers
	sort_elts(Vec);
	// display
	return 0;
}
