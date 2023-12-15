/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:21 by omansour          #+#    #+#             */
/*   Updated: 2023/12/14 22:10:18 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	std::cout << "It's the default constructor of Dog" << std::endl;
	type = "Dog";
	DogBrain = new Brain;
}

Dog::Dog(const Dog& other) {
	std::cout << "It's the copy constructor of Dog" << std::endl;
	*this = other;
}

Dog& Dog::operator=(const Dog& other) {
	if (this != &other)
	{
		type = other.type;
		*DogBrain = *(other.DogBrain);
	}
	return *this;
}

Dog::~Dog() {
	std::cout << "It's the destructor of Dog" << std::endl;
	delete DogBrain;
}

void	Dog::makeSound() const {
	std::cout << "Barking..." << std::endl;
}
