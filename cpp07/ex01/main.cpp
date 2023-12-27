/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 23:42:38 by omansour          #+#    #+#             */
/*   Updated: 2023/12/27 20:02:46 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

template <typename T>
void print_(T& i)
{
	std::cout << i << std::endl;
}

int main()
{
	int integers_[] = {1, 2, 3, 4, 5};
	iter(integers_, 5, &print_);

	std::cout << "-------------------" << std::endl;

	std::string strings_[] = {"First", "Second"};
	iter(strings_, 2, &print_);

	return 0;
}
