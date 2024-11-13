#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

int main(void)
{
	try
	{
		// Bureaucrat b("Jkauker", 1);
		// Bureaucrat a("Dieter", 100);
		ShrubberyCreationForm("King");
		RobotomyRequestForm("Schnitzel");
		PresidentialPardonForm("Jürgen");
		// AForm f("KFZ", 99, 20);
		// AForm t("Copy", 20, 10);
		// AForm z(f);
		// z = t;
		
		// b.signAForm(z);
		// z.beSigned(b);
		// b.signAForm(z);
		// a.signAForm(f);
		// f.beSigned(a);
		// a.signAForm(f);
		// std::cout << a << std::endl;
		// std::cout << b << std::endl;
		// b.decreaseGrade();
		// a.decreaseGrade();
		// b.increaseGrade();
		// b.increaseGrade();
	}
	catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	// catch(const Bureaucrat::GradeTooLowException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// catch(const Bureaucrat::GradeTooHighException& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	
	return (0);
}