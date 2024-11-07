#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name), _grade(grade)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &old) : _name(old._name), _grade(old._grade)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &old)
{
	if (this != &old)
		_grade = old._grade;
	std::cout << "Bureaucrat copy assignment operator called" << std::endl;
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

std::string	Bureaucrat::getName(void)
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return(_grade);
}

int	Bureaucrat::increaseGrade(void)
{
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
	return (this->_grade);
}

int	Bureaucrat::decreaseGrade(void)
{
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
	return (this->_grade);
}

std::ostream& operator<<(std::ostream &out, Bureaucrat &b)
{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
	return (out);
}

void	Bureaucrat::signAForm(AForm &f)
{
	if (f.getSigned() == true)
		std::cout << this->_name << " signed " << f.getName() << std::endl;
	else
		std::cout << this->_name << " couldn’t sign " << f.getName() << " because Form is not signed (Grade too low)." << std::endl;
}