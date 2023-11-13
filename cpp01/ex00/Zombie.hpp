/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 02:56:01 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 03:37:45 by omansour         ###   ########.fr       */
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
	Zombie(std::string name);
	~Zombie();

	void announce(void);
};

Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

#endif
