#include "Intern.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

Intern::Intern(void)
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::Intern(const Intern &old)
{
	(void)old;
	std::cout << "Intern copy constructor called" << std::endl;
}

Intern& Intern::operator=(const Intern &old)
{
	(void)old;
	std::cout << "Intern copy assignment operator called" << std::endl;
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

typedef AForm* (*FormCreator)(std::string target);

struct FormEntry
{
	std::string name;
	FormCreator creator;
};

AForm* createPresidentialPardonForm(std::string target)
{
	return new PresidentialPardonForm(target);
}

AForm* createShrubberyCreationForm(std::string target)
{
	return new ShrubberyCreationForm(target);
}

AForm* createRobotomyRequestForm(std::string target)
{
	return new RobotomyRequestForm(target);
}


AForm* Intern::makeForm(std::string formName, std::string target)
{
	FormEntry forms[] = {
		{"presidential pardon", createPresidentialPardonForm},
		{"shrubbery creation", createShrubberyCreationForm},
		{"robotomy request", createRobotomyRequestForm}
	};

	for (unsigned int i = 0; i < sizeof(forms) / sizeof(FormEntry); ++i)
	{
		if (formName == forms[i].name)
		{
			std::cout << "Intern creates " << forms[i].name << std::endl;
			return forms[i].creator(target);
		}
	}
	std::cerr << "Form name not found!" << std::endl;
	std::cerr << "Please use:" << std::endl;
	std::cerr << "presidential pardon" << std::endl;
	std::cerr << "shrubbery creation" << std::endl;
	std::cerr << "robotomy request" << std::endl;
	return (nullptr);
}