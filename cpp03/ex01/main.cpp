/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:27:25 by omansour          #+#    #+#             */
/*   Updated: 2023/11/28 21:35:50 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap a("A");
	ClapTrap b("B");

	a.attack("B");
	b.takeDamage(20);
	b.beRepaired(10);
	a.guardGate();

	return 0;
}
