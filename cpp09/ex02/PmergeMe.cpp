/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:02:19 by omansour          #+#    #+#             */
/*   Updated: 2024/02/10 02:09:54 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

void	show_error(const std::string& err_msg)
{
	std::cerr << err_msg << std::endl;
	std::exit(EXIT_FAILURE);
}

void	check_arg(const char *arg)
{
	for (int i = 0; arg[i]; i++)
	{
		if (i == 0 && arg[i] == '+' && arg[i + 1])
			continue ;
		if (!isdigit(arg[i]))
			show_error("Error : Invalid argument");
	}
}

unsigned int convert_arg(const char *arg)
{
	unsigned int res;
	std::istringstream iss(arg);
	if (!(iss >> res))
		show_error("Error : The argument is not a valid number");
	return res;
}
