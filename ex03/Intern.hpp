#pragma once
#include "AForm.hpp"
#include <iostream>

class Intern
{
	public:
		Intern();
		Intern(const Intern &old);
		Intern& operator=(const Intern &old);
		~Intern();

		AForm* makeForm(std::string formName, std::string target);
};