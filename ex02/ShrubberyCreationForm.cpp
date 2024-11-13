#include "ShrubberyCreationForm.hpp"
#include <fstream>

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
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

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &old) : AForm(old), _target(old._target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
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
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execForm() const
{
    std::cout << "Test" << std::endl;
}