/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 17:49:50 by omansour          #+#    #+#             */
/*   Updated: 2023/12/14 19:03:54 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << "It's the default constructor of Brain" << std::endl;
}

Brain::Brain(const Brain& other) {
	std::cout << "It's the copy constructor of Brain" << std::endl;
	*this = other;
}

Brain& Brain::operator=(const Brain& other) {
	if (this != &other)
	{
		for (int i = 0; i < 100; i++)
			ideas[i] = other.ideas[i];
	}
	return *this;
}

Brain::~Brain() {
	std::cout << "It's the destructor of Brain" << std::endl;
}
