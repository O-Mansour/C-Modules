/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 09:53:22 by omansour          #+#    #+#             */
/*   Updated: 2023/11/23 10:13:04 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>
# include <iostream>

class ClapTrap
{
private:
	std::string name;
	int HitPoints;
	int EnergyPoints;
	int AttackDamage;
	ClapTrap();
	ClapTrap(const ClapTrap& other);
	ClapTrap& operator=(const ClapTrap& other);
public:
	ClapTrap(const std::string& n);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		name = other.name;
		HitPoints = other.HitPoints;
		EnergyPoints = other.EnergyPoints;
		AttackDamage = other.AttackDamage;
	}
	return *this;
}

ClapTrap::ClapTrap(const std::string& n) : name(n), HitPoints(10), EnergyPoints(10), AttackDamage(0)
{
	std::cout << "constructor called" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap" << name << " attacks" << target << ", causing two points of damage!" << std::endl;
}

void takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap <name> attacks <target>, causing <damage> points of damage!" << std::endl;
}

void beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap <name> attacks <target>, causing <damage> points of damage!" << std::endl;
}

#endif
