#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "AForm.hpp"

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
		ShrubberyCreationForm shrub("shrub");
		RobotomyRequestForm robo("robo");
		PresidentialPardonForm presi("presi");

		//gives error -> shrub not signed yet
		b.signForm(shrub);

		shrub.beSigned(b);
		b.signForm(shrub);
		b.executeForm(shrub);

		a.signForm(robo);
		robo.beSigned(a);
		a.signForm(robo);
		a.executeForm(robo);

		c.signForm(presi);
		presi.beSigned(c);
		c.signForm(presi);
		c.executeForm(presi);
	}
	catch(const std::exception & e)
		{
			std::cerr << e.what() << std::endl;
		}
	
	return (0);
}