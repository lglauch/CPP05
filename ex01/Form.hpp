#pragma once

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		Form(const std::string name, const int gradeSign, const int gradeExec);
		Form(const Form &old);
		Form& operator=(const Form &old);
		~Form();

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "Form grade too high!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
			{
				return "Form grade too low!";
			}
		};

		std::string getName();
		int	getGradeSign();
		int	getGradeExec();
		bool getSigned();
		void beSigned(Bureaucrat &b);
};

std::ostream& operator<<(std::ostream &out, Form &b);