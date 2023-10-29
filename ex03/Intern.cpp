#include "Intern.hpp"

Intern::Intern(void){

}

Intern::~Intern(void){

}

Intern::Intern(Intern const &obj){
	*this = obj;
}

Intern &Intern::operator=(Intern const &obj){
	if (this == &obj)
		return *this;
	return *this;
}

AForm*	Intern::robotForm(std::string target){
	return new RobotomyRequestForm(target);
}

AForm*	Intern::presForm(std::string target){
	return new PresidentialPardonForm(target);
}

AForm*	Intern::shrubForm(std::string target){
	return new ShrubberyCreationForm(target);
}

const char* Intern::FormNotFoundException::what() const throw(){
	return "Form not found";
}

AForm*	Intern::makeForm(std::string name, std::string target){
	std::string formNames[3] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	AForm* (Intern::*formFuncs[3])(std::string) = {&Intern::robotForm, &Intern::presForm, &Intern::shrubForm};
	for (int i = 0; i < 3; i++)
	{
		if (name == formNames[i])
		{
			std::cout << "Intern creates " << name << std::endl;
			return (this->*formFuncs[i])(target);
		}
	}
	throw Intern::FormNotFoundException();
}
