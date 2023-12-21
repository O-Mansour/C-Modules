/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:00 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 18:00:17 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat boss("boss", 1);
		Bureaucrat bob("bob", 40);

		bob.increment();
		std::cout << bob;
		
		std::cout << "-----------------" << std::endl;
		
		ShrubberyCreationForm SCF("home");
		bob.signForm(SCF);
		bob.executeForm(SCF);
		std::cout << SCF;

		std::cout << "-----------------" << std::endl;

		RobotomyRequestForm RRF("bob");
		bob.signForm(RRF);
		bob.executeForm(RRF);
		std::cout << RRF;

		std::cout << "-----------------" << std::endl;

		PresidentialPardonForm PPF("boss");
		boss.signForm(PPF);
		boss.executeForm(PPF);
		std::cout << PPF;
	}
	catch (std::exception & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (...)
	{
		std::cout << "An exception caught" << std::endl;
	}
	return 0;
}
