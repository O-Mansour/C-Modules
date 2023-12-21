/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omansour <omansour@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 09:18:09 by omansour          #+#    #+#             */
/*   Updated: 2023/12/21 09:56:17 by omansour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP

# include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
private:
	const std::string name;
	const int grade_to_sign;
	const int grade_to_exec;
	bool is_signed;
public:
	AForm();
	AForm(const AForm&);
	AForm& operator=(const AForm&);
	virtual ~AForm();
	
	AForm(std::string n, int sign_g, int exec_g);
	const std::string& getName() const;
	const int& getGradeToSign() const;
	const int& getGradeToExec() const;
	const bool& getIsSigned() const;
	void beSigned(const Bureaucrat&);

	virtual void execute(Bureaucrat const & executor) const = 0;

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
	class FormNotSignedException : public std::exception
	{
		public :
			const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream& os, const AForm& f);

#endif
