/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 12:13:01 by omansour          #+#    #+#             */
/*   Updated: 2023/12/27 22:39:05 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "Array.hpp"

class Awesome
{
	private:
		int _n;
	public:
		Awesome() : _n(13) {}
		int get() const { return this->_n; }
};

std::ostream& operator<<(std::ostream & o, Awesome const & a )
{
	o << a.get();
	return o;
}

int main()
{
    Array<int> integers(3);
    for (size_t i = 0; i < integers.size(); i++)
    {
        integers[i] = 13;
        std::cout << integers[i] << std::endl;
    }

    Array<Awesome> complex(3);
    for (size_t i = 0; i < complex.size(); i++)
        std::cout << complex[i] << std::endl;

    return 0;
}
