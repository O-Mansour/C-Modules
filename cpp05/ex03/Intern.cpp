/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/21 10:34:54 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 14:33:41 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void) other;
	return *this;
}

Intern::~Intern()
{
}

int formToNbr(const std::string& form)
{
	std::string names[] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	for (int i = 0; i < 3; i++)
	{
		if (!form.compare(names[i]))
			return i + 1;
	}
	return 0;
}

AForm* Intern::makeForm(std::string form, std::string target)
{
	switch (formToNbr(form))
	{
	case 1:
		std::cout << "Intern creates : " << form << std::endl;
		return new ShrubberyCreationForm(target);
	case 2:
		std::cout << "Intern creates : " << form << std::endl;
		return new RobotomyRequestForm(target);
	case 3:
		std::cout << "Intern creates : " << form << std::endl;
		return new PresidentialPardonForm(target);
	default:
		std::cout << "Intern couldn't create : " << form << std::endl;
		throw AForm::FormDoesNotExistException();
	}
	return NULL;
}
