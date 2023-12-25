/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/23 17:34:19 by omansour          #+#    #+#             */
/*   Updated: 2023/12/25 00:14:28 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

#include <iostream>

class Data
{
private:
	std::string name;
public:
	Data();
	Data(const std::string n);
	Data(const Data&);
	Data& operator=(const Data&);
	~Data();

	const std::string& getName() const;
};

#endif
