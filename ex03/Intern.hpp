#pragma once
#include "AForm.hpp"
#include <iostream>

#define GRAY "\033[90m"
#define RESET "\033[0m"

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern& operator=(const Intern &old);
		~Intern();

		AForm* makeForm(std::string formName, std::string target);
};