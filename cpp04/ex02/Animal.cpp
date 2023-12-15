/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:04 by omansour          #+#    #+#             */
/*   Updated: 2023/12/15 12:39:32 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Animal") {
	std::cout << "It's the default constructor of Animal" << std::endl;
}

Animal::Animal(const Animal& other) {
	std::cout << "It's the copy constructor of Animal" << std::endl;
	*this = other;
}

Animal& Animal::operator=(const Animal& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

Animal::~Animal() {
	std::cout << "It's the destructor of Animal" << std::endl;
}

std::string	Animal::getType() const {
	return type;
}