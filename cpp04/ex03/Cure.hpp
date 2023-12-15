/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:28:12 by omansour          #+#    #+#             */
/*   Updated: 2023/12/15 16:33:33 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(const Cure& other);
	Cure& operator=(const Cure& other);
	~Cure();
	AMateria* clone() const;
	void use(ICharacter& target);
};

Cure::Cure() : AMateria("cure") {}
Cure::Cure(const Cure& other) { *this = other; }
Cure& Cure::operator=(const Cure& other)
{
	if (this != &other)
		type = other.type;
}
Cure::~Cure() {}
AMateria* Cure::clone() const { return new Cure(); }
void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

#endif
