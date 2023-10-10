#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("Shrubbery-Form", 145, 137) , _target("Default") {

}

ShrubberyCreationForm::~ShrubberyCreationForm(void){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): AForm("Shrubbery-Form", 145, 137), _target(target){

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) : AForm(obj), _target(obj._target){

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj){
	if (this == &obj)
		return *this;
	this->_target = obj._target;
	return *this;
}

std::string		ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	std::fstream file;

	file.open(this->_target + "_shrubbery", std::fstream::out);
	file << "my-app/" << std::endl;
	file << "|─ node_modules/" << std::endl;
	file << "├─ public/" << std::endl;
	file << "│  ├─ favicon.ico" << std::endl;
	file << "│  ├─ index.html" << std::endl;
	file << "│  ├─ robots.txt" << std::endl;
	file << "├─ src/" << std::endl;
	file << "│  ├─ index.css" << std::endl;
	file << "│  ├─ index.js" << std::endl;
	file << "├─ .gitignore" << std::endl;
	file << "├─ package.json" << std::endl;
	file << "├─ README.md" << std::endl;
	file.close();
}
