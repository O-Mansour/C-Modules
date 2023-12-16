/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:21 by omansour          #+#    #+#             */
/*   Updated: 2023/12/17 00:24:16 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "It's the default constructor of Dog" << std::endl;
	type = "Dog";
}

Dog::Dog(const Dog& other) : Animal() {
	std::cout << "It's the copy constructor of Dog" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

Dog::~Dog() {
	std::cout << "It's the destructor of Dog" << std::endl;
}

void	Dog::makeSound() const {
	std::cout << "Barking..." << std::endl;
}
