#pragma once

#include "AForm.hpp"

#define GRAY "\033[90m"
#define RESET "\033[0m"

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &old);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &old);
		~ShrubberyCreationForm();

		void execForm() const;
};