#pragma once

#include <iostream>

class Bureaucrat : public std::exception{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(std::string const name, int grade);
		Bureaucrat(Bureaucrat const &obj);
		Bureaucrat &operator=(Bureaucrat const &obj);
		std::string	getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);
		std::exception GradeTooHighException() const;
		std::exception GradeTooLowException() const;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);
