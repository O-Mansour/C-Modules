/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:59:25 by omansour          #+#    #+#             */
/*   Updated: 2023/12/16 20:03:11 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& other) { *this = other; }
Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}
Ice::~Ice() {}
AMateria* Ice::clone() const { return new Ice(); }
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
