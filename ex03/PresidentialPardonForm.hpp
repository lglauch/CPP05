#pragma once

#include "AForm.hpp"

#define GRAY "\033[90m"
#define RESET "\033[0m"


class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &old);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &old);
		~PresidentialPardonForm();

		void execForm() const;
};