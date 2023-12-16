/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 19:59:13 by omansour          #+#    #+#             */
/*   Updated: 2023/12/16 21:19:32 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(const AMateria& other) { *this = other; }

AMateria& AMateria::operator=(const AMateria& other)
{
	if (this != &other)
		type = other.type;
	return *this;
}

AMateria::~AMateria() {}

AMateria::AMateria(std::string const & type) : type(type) {}

std::string const & AMateria::getType() const { return type; }

void AMateria::use(ICharacter& target) {
	std::cout << "A Materia was used on " << target.getName() << std::endl;
}
