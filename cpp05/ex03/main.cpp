/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:00 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 18:03:17 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int main()
{
	try
	{
		Bureaucrat boss("boss", 1);
		Bureaucrat melhadou("melhadou", 40);
		Intern someRandomGuy;
		AForm* fPtr;

		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("shrubbery creation", "Home");
		melhadou.signForm(*fPtr);
		melhadou.executeForm(*fPtr);
		std::cout << *fPtr;

		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("robotomy request", "Bender");
		melhadou.signForm(*fPtr);
		melhadou.executeForm(*fPtr);
		std::cout << *fPtr;

		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("presidential pardon", "Boss");
		boss.signForm(*fPtr);
		boss.executeForm(*fPtr);
		std::cout << *fPtr;
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
