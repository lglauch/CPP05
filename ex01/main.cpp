#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Jkauker", 1);
		Bureaucrat a("Dieter", 100);
		Form f("KFZ", 100, 20);
		Form t("Copy", 20, 10);
		Form z(f);
		z = t;
		
		std::cout << f << std::endl;
		std::cout << t << std::endl;
		std::cout << z << std::endl;
		b.signForm(z);
		z.beSigned(b);
		b.signForm(z);
		a.signForm(f);
		f.beSigned(a);
		std::cout << "Signed status: " << f.getSigned() << std::endl;
		a.signForm(f);
		std::cout << a << std::endl;
		std::cout << b << std::endl;
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