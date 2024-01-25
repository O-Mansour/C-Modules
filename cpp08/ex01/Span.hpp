/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 22:51:46 by omansour          #+#    #+#             */
/*   Updated: 2024/01/24 18:24:52 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
private:
	unsigned int max_nb;
	unsigned int v_length;
	std::vector<int> nbrs;
public:
	Span();
	Span(unsigned int N);
	Span(const Span&);
	Span& operator=(const Span&);
	~Span();
	
	void addNumber(int);
	void addRange(std::vector<int>::iterator start, std::vector<int>::iterator end);

	int shortestSpan();
	int longestSpan();
};

#endif
