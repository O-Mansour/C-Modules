/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 05:01:36 by omansour          #+#    #+#             */
/*   Updated: 2023/11/12 04:51:28 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "Detailed information for debugging purposes." << std::endl;
}

void	Harl::info(void)
{
	std::cout << "General information about the program's execution." << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "Something unexpected happened, the issue might occur in the future." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "Error that needs attention." << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*pTof[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
		if (levels[i] == level)
			(this->*pTof[i])();
}
