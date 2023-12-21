/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 21:50:55 by omansour          #+#    #+#             */
/*   Updated: 2023/12/18 23:31:37 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& other){
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other)
{
	if (this != &other)
		grade = other.getGrade();
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150)
		throw GradeTooLowException();
	if (g < 1)
		throw GradeTooHighException();
	grade = g;
}

const std::string& Bureaucrat::getName() const {
	return name;
}

const int& Bureaucrat::getGrade() const {
	return grade;
}

void Bureaucrat::increment() {
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
}

void Bureaucrat::decrement() {
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Exception : Grade Too High than 1";
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Exception : Grade Too Low than 150";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade() << "." << std::endl;
	return os;
}
