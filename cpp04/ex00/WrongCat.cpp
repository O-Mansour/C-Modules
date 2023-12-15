/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:40 by omansour          #+#    #+#             */
/*   Updated: 2023/12/14 14:12:57 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "It's the default constructor of WrongCat" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat& other) {
	std::cout << "It's the copy constructor of WrongCat" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	if (this != &other)
		type = other.type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << "It's the destructor of WrongCat" << std::endl;
}

void	WrongCat::makeSound() const {
	std::cout << "Meow..." << std::endl;
}
