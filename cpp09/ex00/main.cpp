/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:03:58 by omansour          #+#    #+#             */
/*   Updated: 2024/01/27 20:01:39 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
		show_error("Error : could not open file.");
	BitcoinExchange bitExchange;
	bitExchange.show_value(av[1]);
	return 0;
}
