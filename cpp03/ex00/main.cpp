/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 20:20:09 by omansour          #+#    #+#             */
/*   Updated: 2023/11/24 16:22:22 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap one("one");
	ClapTrap two("two");
	
	one.attack("two");
	two.takeDamage(7);
	one.attack("two");
	two.takeDamage(7);
	// two died
	two.attack("one");
	two.beRepaired(7);
	two.takeDamage(7);

	one.beRepaired(7);
	return 0;
}
