/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:29:51 by omansour          #+#    #+#             */
/*   Updated: 2024/01/25 10:53:18 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
	std::cout << *it << std::endl;
	++it;
	}
	std::stack<int> s(mstack);

	std::cout << "----------------------------" << std::endl;

	MutantStack<int> mstack2(mstack);
	MutantStack<int>::reverse_iterator r_it = mstack2.rbegin();
	MutantStack<int>::reverse_iterator re_it = mstack2.rend();
	while (r_it != re_it)
	{
		std::cout << *r_it << std::endl;
		++r_it;
	}

	std::cout << "----------------------------" << std::endl;

	std::list<int> mlist;
	mlist.push_back(5);
	mlist.push_back(17);
	std::cout << mlist.back() << std::endl;
	mlist.pop_back();
	std::cout << mlist.size() << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(737);
	mlist.push_back(0);
	std::list<int>::iterator it_ = mlist.begin();
	std::list<int>::iterator ite_ = mlist.end();
	++it_;
	--it_;
	while (it_ != ite_)
	{
	std::cout << *it_ << std::endl;
	++it_;
	}

	return 0;
}
