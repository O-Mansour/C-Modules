/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 16:49:08 by omansour          #+#    #+#             */
/*   Updated: 2023/12/24 18:24:16 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef A_HPP
#define A_HPP

#include "Base.hpp"
#include <ctime>
#include <cstdlib>
#include <iostream>

class A : public Base
{
};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
