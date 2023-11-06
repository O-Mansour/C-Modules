/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:55:59 by omansour          #+#    #+#             */
/*   Updated: 2023/11/06 03:18:18 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
	PhoneBook Contacts;
	while (1)
	{
		std::string	cmd;
		std::cout << "phonebook-command-line > ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		else if (cmd == "EXIT")
			std::exit(EXIT_SUCCESS);
		else if (cmd == "ADD")
			Contacts.AddContact();
		else if (cmd == "SEARCH")
			Contacts.ContactSearch();
	}
	return 0;
}
