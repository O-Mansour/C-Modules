/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:27:25 by omansour          #+#    #+#             */
/*   Updated: 2023/11/28 14:44:18 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	FragTrap frag("frag");

	clap.attack("scav");
	scav.attack("frag");
	frag.takeDamage(20);
	frag.attack("clap");
	clap.takeDamage(30);

	clap.beRepaired(10);
	scav.guardGate();
	frag.beRepaired(20);
	frag.highFivesGuys();

	return 0;
}
