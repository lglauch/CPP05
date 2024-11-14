#pragma once

#include "AForm.hpp"


class PresidentialPardonForm : public AForm
{
	private:
		std::string _target;
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &old);
		PresidentialPardonForm& operator=(const PresidentialPardonForm &old);
		~PresidentialPardonForm();

		void execForm() const override;
};