/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:56:06 by omansour          #+#    #+#             */
/*   Updated: 2023/11/06 03:53:11 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : NbContacts (0)
{
}

bool	OnlyDigits(std::string phone_number)
{
	for (int i = 0; phone_number[i]; i++)
		if (!std::isdigit(phone_number[i]))
			return false;
	return true;
}

std::string	CollectInfos(std::string prompt)
{
	std::string str;
	while (str.empty())
	{
		std::cout << "\t" << prompt;
		getline(std::cin, str);
		if (std::cin.eof())
			std::exit(EXIT_SUCCESS);
	}
	return str;
}

void	PhoneBook::AddContact()
{
	std::string	first_name = CollectInfos("Enter the first name : ");
	std::string	last_name = CollectInfos("Enter the last name : ");
	std::string	nickname = CollectInfos("Enter the nickname : ");
	std::string	phone_number;

	while (phone_number.empty() || !OnlyDigits(phone_number))
	{
		std::cout << "\tEnter the phone number : ";
		getline(std::cin, phone_number);
		if (std::cin.eof())
			std::exit(EXIT_SUCCESS);
	}

	std::string	darkest_secret = CollectInfos("Enter the darkest secret : ");

	Book[NbContacts % 8].SetData(NbContacts % 8, first_name, last_name, nickname, phone_number, darkest_secret);
	NbContacts++;
}

std::string	iToString(int i)
{
	std::string	str;
	std::stringstream ss;

	ss << i;
	ss >> str;

	return (str);
}

void PhoneBook::ContactSearch()
{
	if (!NbContacts)
		return;
	int nb = (NbContacts > 8) ? 8 : NbContacts;

	std::cout << "|" << std::setw(10) << "Index" << "|";
	PrintInfo("First Name");
	PrintInfo("Last Name");
	PrintInfo("Nickname");
	std::cout << std::endl;

	for (int i = 0; i < nb; i++)
		Book[i].DisplayData();
	std::string	IndexStr;
	std::cout << "Enter an index : ";
	getline(std::cin, IndexStr);
	if (std::cin.eof())
		std::exit(EXIT_SUCCESS);
	for (int i = 0; i < nb; i++)
	{
		if (IndexStr == iToString(i))
		{
			Book[i].DisplayAll();
			return;
		}
	}
	std::cout << "Invalid index..." << std::endl;
}
