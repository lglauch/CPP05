#include "AForm.hpp"

AForm::AForm(const std::string name, const int gradeSign, const int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec)
{
	std::cout << "AForm default constructor called" << std::endl;
	if (gradeSign < 1 || gradeExec < 1)
		throw GradeTooHighException();
	if (gradeSign > 150 || gradeExec > 150)
		throw GradeTooLowException();
}

AForm::AForm(const AForm &old) : _name(old._name), _signed(old._signed), _gradeSign(old._gradeSign), _gradeExec(old._gradeExec)
{
	std::cout << "AForm copy constructor called" << std::endl;
}

AForm& AForm::operator=(const AForm &old)
{
	std::cout << "AForm copy assignment operator called" << std::endl;
	if (this != &old)
		{
			_signed = old._signed;
		}
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "AForm destructor called" << std::endl;
}

std::string	AForm::getName(void)
{
	return (_name);
}

int	AForm::getGradeSign(void)
{
	return(_gradeSign);
}

int	AForm::getGradeExec(void)
{
	return(_gradeExec);
}

bool AForm::getSigned(void)
{
	return(_signed);
}

std::ostream& operator<<(std::ostream &out, AForm &f)
{
	out << f.getName() << ", AForm signed status: " << f.getSigned() << "\n"
	<< "Grade required to sign: " << f.getGradeSign() << "\n"
	<< "Grade required to execute: " << f.getGradeExec();
	return (out);
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (this->_gradeSign < 1 || this->_gradeExec < 1)
		throw GradeTooHighException();
	if (this->_gradeSign > 150 || this->_gradeExec > 150)
		throw GradeTooLowException();
	if (b.getGrade() > this->_gradeSign)
		throw GradeTooLowException();
	this->_signed = true;
}