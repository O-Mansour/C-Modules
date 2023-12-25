/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:08:18 by omansour          #+#    #+#             */
/*   Updated: 2023/12/25 00:18:07 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"
#include "Serializer.hpp"

int main()
{
	Data product("Melhadou");

	uintptr_t SerialNumber = Serializer::serialize(&product);
	Data *dptr = Serializer::deserialize(SerialNumber);

	std::cout << "Serial Number : " << SerialNumber << std::endl;
	std::cout << "Product Name : " << dptr->getName() << std::endl;

	return 0;
}
