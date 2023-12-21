/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:51:00 by omansour          #+#    #+#             */
/*   Updated: 2023/12/20 09:35:47 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat boss("boss", 1);
		Bureaucrat bob("bob", 10);
		Form F28("F28", 5, 50);
		bob.increment();
		std::cout << bob;
		bob.signForm(F28);
		F28.beSigned(boss);
		std::cout << F28;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (...)
	{
		std::cerr << "An exception caught" << std::endl;
	}
	return 0;
}
