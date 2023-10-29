#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

//pres sign 25 exec 5
//robot sign 72 exec 45
//shru sign 145 exec 137

int	main()
{
	Bureaucrat	one;
	Bureaucrat	two("Segundo", 1);
	Bureaucrat	three("Terceiro", 75);
	PresidentialPardonForm pres("Presidente");
	RobotomyRequestForm robot("robot");
	ShrubberyCreationForm tree("tree");

	try{
		pres.execute(two);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
