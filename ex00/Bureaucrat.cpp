#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default"), _grade(150) {

}

Bureaucrat::~Bureaucrat() {

}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade) {

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
	this->_grade--;
}

void	Bureaucrat::decrementGrade(void) {
	this->_grade++;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj){
	o << "Name: " << obj.getName() << std::endl << "Grade: " << obj.getGrade() << std::endl;
	return o;
}
