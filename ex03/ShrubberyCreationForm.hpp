#pragma once

#include "AForm.hpp"


class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &old);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &old);
		~ShrubberyCreationForm();

		void execForm() const override;
};