/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:27 by omansour          #+#    #+#             */
/*   Updated: 2023/12/14 14:38:08 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	delete meta;
	delete j;
	delete i;

	// const WrongAnimal* w_meta = new WrongAnimal();
	// const WrongAnimal* w_cat = new WrongCat();

	// std::cout << w_meta->getType() << " " << std::endl;
	// std::cout << w_cat->getType() << " " << std::endl;

	// w_meta->makeSound();
	// w_cat->makeSound();
	
	// delete w_meta;
	// delete w_cat;

	return 0;
}
