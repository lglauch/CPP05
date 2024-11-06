#include "Form.hpp"

Form::Form(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form &old) : _name(old._name), _signed(old._signed), _gradeSign(old._gradeSign), _gradeExec(old._gradeExec)
{
	std::cout << "Form copy constructor called" << std::endl;
}

Form& Form::operator=(const Form &old)
{
	std::cout << "Form copy assignment operator called" << std::endl;
	if (this != &old)
		{
			_signed = old._signed;
		}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "Form destructor called" << std::endl;
}

std::string	Form::getName(void)
{
	return (_name);
}

int	Form::getGradeSign(void)
{
	return(_gradeSign);
}

int	Form::getGradeExec(void)
{
	return(_gradeExec);
}

bool Form::getSigned(void)
{
	return(_signed);
}

std::ostream& operator<<(std::ostream &out, Form &f)
{
	out << f.getName() << ", form signed status: " << f.getSigned() << "\n"
	<< "Grade required to sign: " << f.getGradeSign() << "\n"
	<< "Grade required to execute: " << f.getGradeExec();
	return (out);
}
