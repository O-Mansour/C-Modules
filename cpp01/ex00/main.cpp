/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:55:40 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 03:35:20 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("Fo");
	randomChump("Foo");

	Zombie* Fooo = newZombie("Fooo");
	Fooo->announce();
	delete Fooo;
	return 0;
}
