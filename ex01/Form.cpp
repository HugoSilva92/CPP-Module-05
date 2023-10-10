#include "Form.hpp"

Form::Form(void) : _name("Default"), _signed(false), _reqGrade(1), _execGrade(150){

}

Form::~Form(void){

}

Form::Form(std::string name, int reqGrade, int execGrade) : _name(name), _signed(false), _reqGrade(reqGrade), _execGrade(execGrade){

}

Form::Form(Form const &obj) : _name(obj._name), _signed(obj._signed), _reqGrade(obj._reqGrade), _execGrade(obj._execGrade){

}

Form	&Form::operator=(Form const &obj){
	if (this == &obj)
		return *this;
	this->_signed = obj._signed;
	return *this;
}

void	Form::beSigned(Bureaucrat const &sign) {
	if (sign.getGrade() > this->_reqGrade)
		throw GradeTooLowException();
	this->_signed = true;
}

std::string	Form::getName(void) const {
	return this->_name;
}

bool		Form::getSigned(void){
	return this->_signed;
}

int			Form::getReqGrade(void) const{
	return this->_reqGrade;
}

int			Form::getExecGrade(void) const{
	return this->_execGrade;
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Grade too High to sign\n");
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Grade too Low to sign\n");
}

std::ostream	&operator<<(std::ostream &out, Form &obj){
	out << "Form name: " << obj.getName() << std::endl;
	out << "Is signed: " << obj.getSigned() << std::endl;
	out << "Required grade: " << obj.getReqGrade() << std::endl;
	out << "Execute grade: " << obj.getExecGrade() << std::endl;
	return out;
}
