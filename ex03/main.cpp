#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

//pres sign 25 exec 5
//robot sign 72 exec 45
//shru sign 145 exec 137

int	main()
{
	Intern someRandomIntern;
	AForm* rrf;

	try{
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try{
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try{
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		std::cout << rrf->getName() << std::endl;
		delete rrf;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try{
		rrf = someRandomIntern.makeForm("anything", "Bender");
		delete rrf;
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
