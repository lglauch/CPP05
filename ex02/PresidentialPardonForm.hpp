#pragma once

#include "AForm.hpp"


class PresidentialPardonForm : AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &old);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &old);
		~PresidentialPardonForm();
};