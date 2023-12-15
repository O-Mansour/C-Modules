/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:53:34 by omansour          #+#    #+#             */
/*   Updated: 2023/12/15 16:31:54 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(const Ice& other);
	Ice& operator=(const Ice& other);
	~Ice();
	AMateria* clone() const;
	void use(ICharacter& target);
};

Ice::Ice() : AMateria("ice") {}
Ice::Ice(const Ice& other) { *this = other; }
Ice& Ice::operator=(const Ice& other)
{
	if (this != &other)
		type = other.type;
}
Ice::~Ice() {}
AMateria* Ice::clone() const { return new Ice(); }
void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

#endif
