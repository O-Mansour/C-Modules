/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:39:42 by omansour          #+#    #+#             */
/*   Updated: 2023/12/15 17:19:49 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"
# include "AMateria.hpp"

class Character : public ICharacter
{
private:
	std::string name;
	AMateria* inventory[4];
public:
	Character();
	Character(const Character& other); // deep
	Character& operator=(const Character& other); //deep
	~Character();

	Character(std::string&);
	std::string const & getName();
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
};

Character::Character()
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character(std::string& n) : name(n)
{
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

std::string const & Character::getName() { return name; }

void Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			break ;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx >= 4)
		return ;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx >= 4)
		return ;
	else if (!inventory[idx])
		return ;
	inventory[idx]->use(target);
}

#endif
