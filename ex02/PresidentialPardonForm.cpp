#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("Shrubbery-Form", 25, 5) , _target("Default") {

}

PresidentialPardonForm::~PresidentialPardonForm(void){

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("Shrubbery-Form", 25, 5), _target(target){

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obj) : AForm(obj), _target(obj._target){

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj){
	if (this == &obj)
		return *this;
	this->_target = obj._target;
	return *this;
}

std::string		PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	(void)executor;
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
