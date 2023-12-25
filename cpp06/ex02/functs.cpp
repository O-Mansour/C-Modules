/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functs.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 17:28:26 by omansour          #+#    #+#             */
/*   Updated: 2023/12/25 00:24:16 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base * generate(void) {
	std::srand(std::time(0));
	int randomNumber = (std::rand() % 3);
	switch (randomNumber)
	{
	case 0:
		return new A;
	case 1:
		return new B;
	case 2:
		return new C;
	}
	return NULL;
}

void identify(Base* p) {
	A* a;
	B* b;
	C* c;

	a = dynamic_cast<A*>(p);
	if (a)
	{
		std::cout << "A" << std::endl;
		return ;
	}
	b = dynamic_cast<B*>(p);
	if (b)
	{
		std::cout << "B" << std::endl;
		return ;
	}
	c = dynamic_cast<C*>(p);
	if (c)
		std::cout << "C" << std::endl;
}

void identify(Base& p) {
	try
	{
		A& a = dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		(void) a;
		return ;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		B& b = dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		(void) b;
		return ;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		C& c = dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		(void) c;
		return ;
	}
	catch(const std::exception& e)
	{
	}
}
