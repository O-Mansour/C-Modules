/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:14:47 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 09:14:45 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string n) : name(n), b_weapon(NULL)
{
}

HumanB::~HumanB()
{
}

void HumanB::setWeapon(Weapon& w)
{
	b_weapon = &w;
}

void HumanB::attack()
{
	if (b_weapon)
		std::cout << name << " attacks with their " << b_weapon->getType() << std::endl;
}
