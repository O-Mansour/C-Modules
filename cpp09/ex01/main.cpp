/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:11:09 by omansour          #+#    #+#             */
/*   Updated: 2024/01/31 22:31:46 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char const *av[])
{
	if (ac != 2)
		show_error("Error");
	RPN rpn_calculator;
	rpn_calculator.calculate(av[1]);
	return 0;
}
