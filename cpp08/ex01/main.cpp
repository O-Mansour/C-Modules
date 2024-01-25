/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:51:29 by omansour          #+#    #+#             */
/*   Updated: 2024/01/24 18:25:38 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span s_(100000);
	std::vector<int> tmp;
	for (size_t i = 1; i <= 100000; i++)
		tmp.push_back(i);
	try
	{
		s_.addRange(tmp.begin(), tmp.end());
		int ls = s_.longestSpan();
		int ss = s_.shortestSpan();
		std::cout << ls << std::endl;
		std::cout << ss << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}

// int main()
// {
// 	Span sp = Span(5);

// 	sp.addNumber(6);
// 	sp.addNumber(3);
// 	sp.addNumber(17);
// 	sp.addNumber(9);
// 	sp.addNumber(11);

// 	std::cout << sp.shortestSpan() << std::endl;
// 	std::cout << sp.longestSpan() << std::endl;

// 	return 0;
// }
