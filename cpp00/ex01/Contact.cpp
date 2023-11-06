/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:55:43 by omansour          #+#    #+#             */
/*   Updated: 2023/11/06 03:26:42 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::SetData(int index, std::string	first_name, std::string	last_name, std::string	nickname,
					std::string	phone_number, std::string	darkest_secret)
{
	this->index = index;
	this->first_name = first_name;
	this->last_name = last_name;
	this->nickname = nickname;
	this->phone_number = phone_number;
	this->darkest_secret = darkest_secret;
}

std::string	TruncateStr(const std::string str)
{
	if (str.length() <= 10)
		return str;
	else
		return str.substr(0, 9) + ".";
}

void	PrintInfo(std::string str)
{
	std::cout << std::setw(10) << TruncateStr(str) << "|";
}

void	Contact::DisplayData()
{
	std::cout << "|" << std::setw(10) << index << "|";
	PrintInfo(first_name);
	PrintInfo(last_name);
	PrintInfo(nickname);
	std::cout << std::endl;
}

void	Contact::DisplayAll()
{
	std::cout << "First name : " << first_name << std::endl;
	std::cout << "Last name : " << last_name << std::endl;
	std::cout << "Nickname : " << nickname << std::endl;
	std::cout << "Phone number : " << phone_number << std::endl;
	std::cout << "Darkest secret : " << darkest_secret << std::endl;
}
