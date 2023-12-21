/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:25 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 10:38:38 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm() : AForm("robotomy request", 72, 45)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& other) : AForm(other)
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& other)
{
	if (this != &other)
		target = other.target;
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm::RobotomyRequestForm(std::string t)
				: AForm("robotomy request", 72, 45), target(t)
{
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::cout << "Some drilling noises..." << std::endl;
	std::srand(std::time(0));
	if (std::rand() % 2 == 0)
		std::cout << target << " has been robotomized successfully." << std::endl;
	else
		std::cout << target << " robotomy failed." << std::endl;
}
