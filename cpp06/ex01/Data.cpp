/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:16 by omansour          #+#    #+#             */
/*   Updated: 2023/12/25 00:15:01 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

Data::Data()
{
}

Data::Data(const std::string n) : name(n)
{
}

Data::Data(const Data& other) {
	*this = other;
}

Data& Data::operator=(const Data& other) {
	if (this != &other)
		name = other.getName();
	return *this;
}

Data::~Data()
{
}

const std::string& Data::getName() const {
	return name;
}
