#pragma once

#include <iostream>

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
					return "Grade too high!";
				}
		};

		class GradeTooLowException : public std::exception
		{
			public:
				const char* what() const throw()
			{
				return "Grade too low!";
			}
		};

		std::string getName();
		int	getGradeSign();
		int	getGradeExec();
		bool getSigned();
};

std::ostream& operator<<(std::ostream &out, Form &b);