#include "Bureaucrat.hpp"

int	main()
{
	Bureaucrat one;
	Bureaucrat two("Segundo", 1);

	std::cout << one << std::endl;
	std::cout << two << std::endl;

	try{
		two.incrementGrade();
	} catch (std::exception &t) {
		std::cout << t.what() << std::endl;
	}
	two.decrementGrade();
	std::cout << two << std::endl;

	try{
		one.decrementGrade();
	} catch (std::exception &t) {
		std::cout << t.what() << std::endl;
	}
	one.incrementGrade();
	std::cout << one << std::endl;

	try{
		Bureaucrat("test", -150);
	} catch (std::exception &t) {
		std::cout << t.what() << std::endl;
	}

	try{
		Bureaucrat("Test", 1500);
	} catch (std::exception &t) {
		std::cout << t.what() << std::endl;
	}

}
