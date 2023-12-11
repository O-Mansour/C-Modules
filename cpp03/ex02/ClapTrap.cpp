/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:27:18 by omansour          #+#    #+#             */
/*   Updated: 2023/11/28 21:37:30 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Constructor !" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy Constructor !" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "ClapTrap Copy Assignement !" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(std::string n) : name(n), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "ClapTrap Name Constructor !" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (HitPoints <= 0 || EnergyPoints <= 0)
		return ;
	EnergyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << AttackDamage << " points of damage" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (HitPoints <= 0)
		return ;
	if (amount >= HitPoints)
		HitPoints = 0;
	else
		HitPoints -= amount;
	std::cout << "ClapTrap " << name << " was damaged by " << amount << " points" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (HitPoints <= 0 || EnergyPoints <= 0)
		return ;
	if (HitPoints >= UINT_MAX - amount)
		HitPoints = UINT_MAX;
	else
		HitPoints += amount;
	EnergyPoints--;
	std::cout << "ClapTrap " << name << " gets " << amount << " hit points back" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor !" << std::endl;
}
