/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:00 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 14:43:09 by omansour         ###   ########.fr       */
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
		Bureaucrat bob("bob", 40);
		Intern someRandomGuy;
		AForm* fPtr;
		
		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("shrubbery creation", "Home");
		bob.signForm(*fPtr);
		bob.executeForm(*fPtr);
		std::cout << *fPtr;

		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("robotomy request", "Bender");
		bob.signForm(*fPtr);
		bob.executeForm(*fPtr);
		std::cout << *fPtr;

		std::cout << "-----------------" << std::endl;

		fPtr = someRandomGuy.makeForm("presidential pardon", "Boss");
		boss.signForm(*fPtr);
		boss.executeForm(*fPtr);
		std::cout << *fPtr;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
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
