/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:32 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 18:01:19 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("shrubbery creation", 145, 137)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other) : AForm(other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other)
{
	if (this != &other)
		target = other.target;
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t)
				: AForm("shrubbery creation", 145, 137), target(t)
{
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw FormNotSignedException();
	else if (executor.getGrade() > getGradeToExec())
		throw GradeTooLowException();
	std::string fileName = target + "_shrubbery";
	std::ofstream outfile(fileName.c_str());
	if (outfile.is_open())
	{
		outfile << "        *        " << std::endl;
		outfile << "       ***       " << std::endl;
		outfile << "      *****      " << std::endl;
		outfile << "     *******     " << std::endl;
		outfile << "    *********    " << std::endl;
		outfile << "   ***********   " << std::endl;
		outfile << "  *************  " << std::endl;
		outfile << " *************** " << std::endl;
		outfile << "*****************" << std::endl;
		outfile << "       | |       " << std::endl;
		outfile << "       | |       " << std::endl;
		outfile << "       | |       " << std::endl;
		outfile.close();
	}
	else
		throw std::runtime_error("CANNOT OPEN THE FILE");
}
