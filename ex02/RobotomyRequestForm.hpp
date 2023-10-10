#pragma once

#include "AForm.hpp"
#include <fstream>

//class AForm;

class RobotomyRequestForm : public AForm {
	private:
		std::string		_target;
	public:
		RobotomyRequestForm(void);
		~RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &obj);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &obj);

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
