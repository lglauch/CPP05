#pragma once

#include "AForm.hpp"

#define GRAY "\033[90m"
#define RESET "\033[0m"

class RobotomyRequestForm : public AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &old);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &old);
		~RobotomyRequestForm();

		void execForm() const;
};