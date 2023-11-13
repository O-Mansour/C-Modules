/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 03:20:19 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 03:43:26 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>
# include <cstdlib>

class Zombie
{
private:
	std::string name;
public:
	Zombie();
	~Zombie();

	void announce(void);
	void SetName(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif
