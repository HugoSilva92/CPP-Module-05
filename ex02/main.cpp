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
		two.signForm(pres);
		pres.execute(two);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try{
		three.signForm(robot);
		robot.execute(three); // this isnt printed cuz he catches the first exception!
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try{
		three.signForm(tree);
		tree.execute(three);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try{
		robot.execute(one);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		robot.execute(two);
		two.signForm(robot);
		robot.execute(two);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		two.signForm(robot);
		robot.execute(two);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	Bureaucrat four ("Quarto", 150);
	Bureaucrat five ("Quinto", 10);
	PresidentialPardonForm pres2("Presidente2");

	try {
		four.executeForm(pres);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		five.executeForm(pres2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try {
		five.signForm(pres2);
		five.executeForm(pres2);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
}
