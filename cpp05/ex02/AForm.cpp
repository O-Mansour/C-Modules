/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:06 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 09:57:32 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() : grade_to_sign(150), grade_to_exec(150), is_signed(false)
{
}

AForm::AForm(const AForm& other) : grade_to_sign(150), grade_to_exec(150) {
	*this = other;
}

AForm& AForm::operator=(const AForm& other)
{
	if (this != &other)
		is_signed = other.getIsSigned();
	return *this;
}

AForm::~AForm()
{
}

AForm::AForm(std::string n, int sign_g, int exec_g) : name (n), grade_to_sign(sign_g),
			grade_to_exec(exec_g), is_signed(false) {
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	else if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
}

const char* AForm::GradeTooHighException::what() const throw()
{
	return "Form Exception : Grade Too High";
}

const char* AForm::GradeTooLowException::what() const throw()
{
	return "Form Exception : Grade Too Low";
}

const char* AForm::FormNotSignedException::what() const throw()
{
	return "Form Exception : Form Not Signed";
}

const std::string& AForm::getName() const {
	return name;
}
const int& AForm::getGradeToSign() const {
	return grade_to_sign;
}
const int& AForm::getGradeToExec() const {
	return grade_to_exec;
}
const bool& AForm::getIsSigned() const {
	return is_signed;
}

void AForm::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= grade_to_sign)
		is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const AForm& f) {
	os << "Form " << f.getName() << ", grade to sign : " << f.getGradeToSign()
	<< ", grade to execute : " << f.getGradeToExec() << ". Status : ";
	if (f.getIsSigned())
		os << "SIGNED." << std::endl;
	else
		os << "NOT SIGNED." << std::endl;
	return os;
}
