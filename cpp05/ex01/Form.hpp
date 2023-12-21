/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 22:24:16 by omansour          #+#    #+#             */
/*   Updated: 2023/12/19 23:38:22 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string name;
	const int grade_to_sign;
	const int grade_to_exec;
	bool is_signed;
public:
	Form();
	Form(const Form&);
	Form& operator=(const Form&);
	~Form();
	
	Form(std::string n, int sign_g, int exec_g);
	const std::string& getName() const;
	const int& getGradeToSign() const;
	const int& getGradeToExec() const;
	const bool& getIsSigned() const;
	void beSigned(const Bureaucrat&);

	class GradeTooHighException : public std::exception
	{
		public:
			const char* what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const Form& f);

#endif