/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:22:32 by omansour          #+#    #+#             */
/*   Updated: 2023/11/29 01:04:02 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap Constructor !" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor !" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other)
{
	std::cout << "FragTrap Copy Constructor !" << std::endl;
	*this = other;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	std::cout << "FragTrap Copy Assignement !" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return *this;
}

FragTrap::FragTrap(std::string n) : ClapTrap(n)
{
	std::cout << "FragTrap Name Constructor !" << std::endl;
	HitPoints = 100;
	EnergyPoints = 100;
	AttackDamage = 30;
}

void FragTrap::highFivesGuys()
{
	std::cout << name << " requests high fives!" << std::endl;
}
