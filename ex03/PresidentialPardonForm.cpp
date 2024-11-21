#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target)
{
	std::cout << GRAY << "PresidentialPardonForm constructor called" << RESET << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &old) : AForm(old), _target(old._target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &old)
{
	std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
	if (this != &old)
	{
		this->_target = old._target;
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << GRAY << "PresidentialPardonForm destructor called" << RESET << std::endl;
}

void PresidentialPardonForm::execForm() const
{
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}