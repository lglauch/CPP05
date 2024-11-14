#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

//ShrubberyCreationForm: Required grades: sign 145, exec 137
//RobotomyRequestForm: Required grades: sign 72, exec 45
//PresidentialPardonForm: Required grades: sign 25, exec 5


int main(void)
{
	try
	{
		Bureaucrat b("Jkauker", 137);
		Bureaucrat a("Dieter", 45);
		Bureaucrat c("Jeffry", 5);
		// ShrubberyCreationForm shrub("shrub");
		// RobotomyRequestForm robo("robo");
		// PresidentialPardonForm presi("presi");
		Intern intern;
		AForm* form;
		AForm* form2;
		AForm* form3;
		

		form = intern.makeForm("fail example", "Skrillex");
		if (form)
		{
			delete form;
		}
		form = intern.makeForm("robotomy request", "Skrillex");
		if (form)
		{
			form->beSigned(a);
			a.signForm(*form);
			a.executeForm(*form);
			delete form;
		}
		form2 = intern.makeForm("presidential pardon", "Skrillex");
		if (form2)
		{
			form2->beSigned(c);
			c.signForm(*form2);
			c.executeForm(*form2);
			delete form2;
		}
		form3 = intern.makeForm("shrubbery creation", "Skrillex");
		if (form3)
		{
			form3->beSigned(b);
			b.signForm(*form3);
			b.executeForm(*form3);
			delete form3;
		}
	}
	catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	
	return (0);
}