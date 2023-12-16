/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:59:25 by omansour          #+#    #+#             */
/*   Updated: 2023/12/17 00:40:56 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& other) : AMateria("ice") { *this = other; }
Ice& Ice::operator=(const Ice& other)
{
	(void) other;
	return *this;
}
Ice::~Ice() {}
AMateria* Ice::clone() const { return new Ice(); }
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
