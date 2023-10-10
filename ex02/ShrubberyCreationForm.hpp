#pragma once

#include "AForm.hpp"
#include <fstream>

//class AForm;

class ShrubberyCreationForm : public AForm {
	private:
		std::string		_target;
	public:
		ShrubberyCreationForm(void);
		~ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &obj);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &obj);

		void	execute(Bureaucrat const &executor) const;
		std::string		getTarget(void) const;
		
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};
