/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:48:17 by omansour          #+#    #+#             */
/*   Updated: 2023/11/06 00:29:34 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int	main(int ac, char *av[])
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return 0;
	}

	for (int i = 1; av[i]; i++)
	{
		std::string str = av[i];
		for (size_t j = 0; j < str.length(); j++)
		{
			char c = std::toupper(str[j]);
			std::cout << c;
		}
	}
	std::cout << std::endl;
	return 0;
}
