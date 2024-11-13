#pragma once

#include "AForm.hpp"


class RobotomyRequestForm : AForm
{
	private:
		std::string _target;
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(const RobotomyRequestForm &old);
		RobotomyRequestForm& operator=(const RobotomyRequestForm &old);
		~RobotomyRequestForm();

		void execForm() const override;
};