#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &obj) : _name(obj._name), _grade(obj._grade){

}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &obj) {
	if (this == &obj)
		return *this;
	this->_grade = obj._grade;
	return *this;
}

std::string	Bureaucrat::getName(void) const {
	return this->_name;
}

int Bureaucrat::getGrade(void) const {
	return this->_grade;
}

void	Bureaucrat::incrementGrade(void) {
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void) {
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj){
	o << "Name: " << obj.getName() << std::endl << "Grade: " << obj.getGrade() << std::endl;
	return o;
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return "grade is too High!\n";
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return "grade is too Low!\n";
}

void		Bureaucrat::signForm(AForm &form){
	//std::cout << this->_grade << " " << form.getReqGrade() << std::endl;
	if (this->_grade <= form.getReqGrade())
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
	else
		std::cout << this->getName() << " could't sign " << form.getName() << " because ";
	form.beSigned(*this);
}

void		Bureaucrat::executeForm(AForm const &form){
		form.execute(*this);
}
