#pragma once

#include <iostream>
#include <ostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
	private:
		const std::string _name;
		int	_grade;

	public:
		Bureaucrat(const std::string name, int grade);
		Bureaucrat(const Bureaucrat &old);
		Bureaucrat& operator=(const Bureaucrat &old);
		~Bureaucrat();

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

		std::string getName() const;
		int	getGrade() const;
		int	decreaseGrade();
		int	increaseGrade();
		void signForm(AForm &f);
		void executeForm(AForm const & form);
};

std::ostream& operator<<(std::ostream &out, Bureaucrat &b);