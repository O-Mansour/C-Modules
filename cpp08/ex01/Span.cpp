/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:51:42 by omansour          #+#    #+#             */
/*   Updated: 2024/01/24 18:22:27 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : max_nb(0), v_length(0)
{
}

Span::Span(const Span& other)
{
	*this = other;
}

Span& Span::operator=(const Span& other)
{
	if (this != &other)
	{
		max_nb = other.max_nb;
		v_length = other.v_length;
		nbrs = other.nbrs;
	}
	return *this;
}

Span::~Span()
{
}

Span::Span(unsigned int N) : max_nb(N), v_length(0)
{
}

void Span::addNumber(int nb)
{
	if (v_length == max_nb)
		throw std::runtime_error("ALREADY STORED THE MAX ELEMENTS");
	nbrs.push_back(nb);
	v_length++;
}

int Span::shortestSpan()
{
	if (v_length < 2)
		throw std::runtime_error("NO SPAN CAN BE FOUND");
	std::vector<int> tmp = nbrs;
	std::sort(tmp.begin(), tmp.end());
	int shortest_s = tmp[1] - tmp[0];
	for (unsigned int i = 2; i < v_length; i++)
	{
		if (shortest_s > tmp[i] - tmp[i - 1])
			shortest_s = tmp[i] - tmp[i - 1];
	}
	return shortest_s;
}

int Span::longestSpan()
{
	if (v_length < 2)
		throw std::runtime_error("NO SPAN CAN BE FOUND");

	std::vector<int>::iterator max = std::max_element(nbrs.begin(), nbrs.end());
	std::vector<int>::iterator min = std::min_element(nbrs.begin(), nbrs.end());

	return (*max - *min);
}

void Span::addRange(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (max_nb - v_length < end - start)
		throw std::range_error("NO ENOUGH SPACE");
	nbrs.insert(nbrs.end(), start, end);
	v_length += end - start;
}
