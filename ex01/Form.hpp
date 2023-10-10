#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_reqGrade;
		const int			_execGrade;

	public:
		Form(void);
		~Form(void);
		Form(std::string name, int reqGrade, int execGrade);
		Form(Form const &obj);
		Form &operator=(Form const &obj);
		void	beSigned(Bureaucrat const &sign);		//dont forget the reference as we want to change the object
		std::string	getName(void) const;
		bool		getSigned(void);
		int			getReqGrade(void) const;
		int			getExecGrade(void) const;
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};


std::ostream	&operator<<(std::ostream &out, Form &obj);
