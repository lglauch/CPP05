#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old) : AForm(old), _target(old._target)
{
	std::cout << GRAY << "ShrubberyCreationForm copy constructor called" << RESET << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &old)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
	if (this != &old)
	{
		this->_target = old._target;
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << GRAY << "ShrubberyCreationForm destructor called" << RESET << std::endl;
}

void ShrubberyCreationForm::execForm() const
{
    std::ofstream outfile(_target + "_shrubbery");
    if (outfile.is_open())
    {
        std::cout << "Building tree..." << std::endl;
        outfile << "       _-_\n";
        outfile << "    /~~   ~~\\\n";
        outfile << " /~~         ~~\\\n";
        outfile << "{               }\n";
        outfile << " \\  _-     -_  /\n";
        outfile << "   ~  \\\\ //  ~\n";
        outfile << "_- -   | | _- _\n";
        outfile << "  _ -  | |   -_\n";
        outfile << "      // \\\\\n";
        outfile.close();
    }
    else
    {
        std::cerr << "Error: Could not create file " << _target + "_shrubbery" << std::endl;
    }
}