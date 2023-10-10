#pragma once

#include "AForm.hpp"
#include <fstream>

//class AForm;

class PresidentialPardonForm : public AForm {
	private:
		std::string		_target;
	public:
		PresidentialPardonForm(void);
		~PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &obj);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &obj);

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
