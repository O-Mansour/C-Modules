/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:20:12 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 04:05:41 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie*	Horde = zombieHorde(13, "Waaaa");
	for (int i = 0; i < 13; i++)
		Horde[i].announce();

	delete[] Horde;
	return 0;
}
