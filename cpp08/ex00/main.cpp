/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/29 22:43:53 by omansour          #+#    #+#             */
/*   Updated: 2024/01/23 20:34:03 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	try {
		std::vector<int> intVec;
		for (int i = 1; i < 4; i++)
			intVec.push_back(i);
		easyfind(intVec, 3);		

		std::list<int> intList;
		for (int i = 1; i < 4; i++)
			intList.push_back(i);
		easyfind(intList, 0);
	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	return 0;
}
