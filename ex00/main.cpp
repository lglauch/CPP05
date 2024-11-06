#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat b("Jkauker", 1);
		Bureaucrat a("Dieter", 150);
		Bureaucrat c(b);

		std::cout << c << std::endl;

		c = a;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << c << std::endl;

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