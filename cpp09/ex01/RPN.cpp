/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/30 17:11:16 by omansour          #+#    #+#             */
/*   Updated: 2024/01/31 22:27:28 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN()
{
}

RPN::RPN(const RPN& other)
{
	*this = other;
}

RPN& RPN::operator=(const RPN& other)
{
	if (this != &other)
		nbr_stack = other.nbr_stack;
	return *this;
}

RPN::~RPN()
{
}

void	show_error(const std::string& err_msg)
{
	std::cerr << err_msg << std::endl;
	std::exit(EXIT_FAILURE);
}

bool	is_operator(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/')
		return true;
	return false;
}

int	do_operation(int nb1, int nb2, char op)
{
	if (op == '+')
		return (nb2 + nb1);
	else if (op == '-')
		return (nb2 - nb1);
	else if (op == '*')
		return (nb2 * nb1);
	else if (op == '/')
		return (nb2 / nb1);
	return (0);
}

void RPN::calculate(const char *input)
{
	for (int i = 0; input[i]; i++)
	{
		if (!isdigit(input[i]) && !is_operator(input[i]) && input[i] != ' ')
			show_error("Error");
		else if (isdigit(input[i]))
			nbr_stack.push(input[i] - 48);
		else if (is_operator(input[i]))
		{
			if (nbr_stack.size() < 2)
				show_error("Error");
			int nb1 = nbr_stack.top();
			nbr_stack.pop();
			int nb2 = nbr_stack.top();
			nbr_stack.pop();
			int res = do_operation(nb1, nb2, input[i]);
			nbr_stack.push(res);
		}
	}
	if (nbr_stack.size() != 1)
		show_error("Error");
	std::cout << nbr_stack.top() << std::endl;
}
