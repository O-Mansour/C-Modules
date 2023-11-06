/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 23:55:53 by omansour          #+#    #+#             */
/*   Updated: 2023/11/06 03:27:31 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>
# include <cctype>
# include <iomanip>
# include <sstream>
# include <cstdlib>

class Contact
{
private:
	int			index;
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	darkest_secret;

public:
	void	SetData(int index, std::string	first_name,
					std::string	last_name,
					std::string	nickname,
					std::string	phone_number,
					std::string	darkest_secret);
	void	DisplayData();
	void	DisplayAll();
};

void	PrintInfo(std::string str);

#endif