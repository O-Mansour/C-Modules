/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 18:02:21 by omansour          #+#    #+#             */
/*   Updated: 2024/02/10 02:10:06 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

#include <iostream>
#include <cstdlib>
#include <vector>
#include <deque>
#include <sstream>

void	show_error(const std::string& err_msg);
void	check_arg(const char *arg);
unsigned int convert_arg(const char *arg);

#endif
