/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:24:13 by omansour          #+#    #+#             */
/*   Updated: 2023/12/20 08:18:08 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : grade_to_sign(150), grade_to_exec(150), is_signed(false)
{
}

Form::Form(const Form& other) : grade_to_sign(150), grade_to_exec(150) {
	*this = other;
}

Form& Form::operator=(const Form& other)
{
	if (this != &other)
		is_signed = other.getIsSigned();
	return *this;
}

Form::~Form()
{
}

Form::Form(std::string n, int sign_g, int exec_g) : name (n), grade_to_sign(sign_g),
			grade_to_exec(exec_g), is_signed(false) {
	if (grade_to_exec > 150 || grade_to_sign > 150)
		throw GradeTooLowException();
	else if (grade_to_exec < 1 || grade_to_sign < 1)
		throw GradeTooHighException();
}

const char* Form::GradeTooHighException::what() const throw()
{
	return "Form Exception : Grade Too High";
}

const char* Form::GradeTooLowException::what() const throw()
{
	return "Form Exception : Grade Too Low";
}

const std::string& Form::getName() const {
	return name;
}
const int& Form::getGradeToSign() const {
	return grade_to_sign;
}
const int& Form::getGradeToExec() const {
	return grade_to_exec;
}
const bool& Form::getIsSigned() const {
	return is_signed;
}

void Form::beSigned(const Bureaucrat& b) {
	if (b.getGrade() <= grade_to_sign)
		is_signed = true;
	else
		throw GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& f) {
	os << "Form " << f.getName() << ", grade to sign : " << f.getGradeToSign()
	<< ", grade to execute : " << f.getGradeToExec() << ". Status : ";
	if (f.getIsSigned())
		os << "SIGNED." << std::endl;
	else
		os << "NOT SIGNED." << std::endl;
	return os;
}