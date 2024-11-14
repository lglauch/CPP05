#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &old) : AForm(old), _target(old._target)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &old)
{
	std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
	if (this != &old)
	{
		this->_target = old._target;
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execForm() const
{
    srand(time(0));
	if (rand() % 2 == 0)
		std::cout << _target << " has been robotomized" << std::endl;
	else
		std::cout << "Robotomy form failed" << std::endl; 
}