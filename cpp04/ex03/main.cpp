/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 13:20:20 by omansour          #+#    #+#             */
/*   Updated: 2023/12/16 22:13:22 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");
	AMateria* tmp;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << me->getName();
	me->use(0, *bob);
	std::cout << me->getName();
	me->use(1, *bob);

	delete me;
	delete src;

	ICharacter* Ahamou = new Character("Ahamou");
	AMateria* ice = new Ice();
	AMateria* cure = new Cure();

	Ahamou->equip(ice);
	std::cout << Ahamou->getName();
	Ahamou->use(0, *bob);
	Ahamou->unequip(0);
	Ahamou->equip(cure);
	std::cout << Ahamou->getName();
	Ahamou->use(0, *Ahamou);

	delete ice;
	delete Ahamou;
	delete bob;
	
	return 0;
}
