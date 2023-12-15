/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 11:22:27 by omansour          #+#    #+#             */
/*   Updated: 2023/12/15 16:57:15 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal* Animal_arr[] = {new Dog(), new Dog(), new Cat(), new Cat()};
	for (int i = 0; i < 4; i++)
	{
		Animal_arr[i]->makeSound();
		delete Animal_arr[i];
	}

	// Animal inst; CANNOT MAKE AN INSTANCE FROM AN ABSTRACT CLASS

	return 0;
}
