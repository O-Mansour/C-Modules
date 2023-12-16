/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:59:21 by omansour          #+#    #+#             */
/*   Updated: 2023/12/17 00:41:09 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& other) : AMateria("cure") { *this = other; }
Cure& Cure::operator=(const Cure& other)
{
	(void) other;
	return *this;
}
Cure::~Cure() {}
AMateria* Cure::clone() const { return new Cure(); }
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
