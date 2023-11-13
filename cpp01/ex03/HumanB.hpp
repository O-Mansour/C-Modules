/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 08:14:49 by omansour          #+#    #+#             */
/*   Updated: 2023/11/10 09:14:41 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	std::string	name;
	Weapon*		b_weapon;
public:
	HumanB(std::string n);
	~HumanB();
	void setWeapon(Weapon& w);
	void attack();
};

#endif
