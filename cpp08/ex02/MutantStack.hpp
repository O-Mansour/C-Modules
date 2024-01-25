/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 13:29:53 by omansour          #+#    #+#             */
/*   Updated: 2024/01/25 10:45:43 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack(): std::stack<T>() {}
	MutantStack(const MutantStack& other) : std::stack<T>(other) {}
	MutantStack& operator=(const MutantStack& other)
	{
		if (this != &other)
			*(std::stack<T> *)this =  other;
		return *this;
	}
	~MutantStack() {}
	
	typedef typename std::deque<T>::iterator iterator;

	MutantStack<T>::iterator begin()
	{
		return this->c.begin();
	}

	MutantStack<T>::iterator end()
	{
		return this->c.end();
	}

	typedef typename std::deque<T>::reverse_iterator reverse_iterator;

	MutantStack<T>::reverse_iterator rbegin()
	{
		return this->c.rbegin();
	}

	MutantStack<T>::reverse_iterator rend()
	{
		return this->c.rend();
	}
};

#endif
