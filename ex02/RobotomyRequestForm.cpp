#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robot-Form", 72, 45) , _target("Default") {

}

RobotomyRequestForm::~RobotomyRequestForm(void){

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("Robot-Form", 72, 45), _target(target){

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj) : AForm(obj), _target(obj._target){

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obj){
	if (this == &obj)
		return *this;
	this->_target = obj._target;
	return *this;
}

std::string		RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	(void)executor;
	std::cout << "DRILLING NOISES" << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " has failed to be robotomized" << std::endl;
}
