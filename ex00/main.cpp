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

		std::cout << "Name of b is" << b.getName() << std::endl;
		std::cout << "Grade of b is " << b.getGrade() << std::endl;
		// b.decreaseGrade();
		// a.decreaseGrade();
		b.decreaseGrade();

		std::cout << "Grade of b is " << b.getGrade() << std::endl;

		b.increaseGrade();

		std::cout << "Grade of b is " << b.getGrade() << std::endl;

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