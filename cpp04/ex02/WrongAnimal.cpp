/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:35 by omansour          #+#    #+#             */
/*   Updated: 2023/12/14 14:10:26 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
	std::cout << "It's the default constructor of WrongAnimal" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) {
	std::cout << "It's the copy constructor of WrongAnimal" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "It's the destructor of WrongAnimal" << std::endl;
}

std::string	WrongAnimal::getType() const {
	return type;
}

void	WrongAnimal::makeSound() const {
	std::cout << "Animals have various sounds !" << std::endl;
}
