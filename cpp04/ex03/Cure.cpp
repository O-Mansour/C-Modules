/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:59:21 by omansour          #+#    #+#             */
/*   Updated: 2023/12/16 20:02:55 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& other) { *this = other; }
Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}
Cure::~Cure() {}
AMateria* Cure::clone() const { return new Cure(); }
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
