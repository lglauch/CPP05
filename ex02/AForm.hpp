#pragma once

#include <iostream>
#include <string.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string _name;
		bool _signed;
		const int _gradeSign;
		const int _gradeExec;

	public:
		AForm(const std::string name, const int gradeSign, const int gradeExec);
		AForm(const AForm &old);
		AForm& operator=(const AForm &old);
		virtual ~AForm() = 0;

		class GradeTooHighException : public std::exception
		{
			public:
				const char* what() const throw()
				{
					return "AForm grade too high!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
			{
				return "AForm grade too low!";
			}
		};

		class FormNotSignedException : public std::exception
        {
            public:
                const char* what() const throw()
                {
                    return "Form not signed!";
                }
        };

		std::string getName();
		int	getGradeSign();
		int	getGradeExec();
		bool getSigned();
		void beSigned(Bureaucrat &b);

		void execute(Bureaucrat const & executor) const;
		virtual void execForm() const = 0;
};

std::ostream& operator<<(std::ostream &out, AForm &b);