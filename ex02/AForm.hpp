#pragma once

#include "Bureaucrat.hpp"
class Bureaucrat;

class AForm{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_reqGrade;
		const int			_execGrade;

	public:
		AForm(void);
		virtual ~AForm(void);
		AForm(std::string name, int reqGrade, int execGrade);
		AForm(AForm const &obj);
		AForm &operator=(AForm const &obj);

		virtual void	execute(Bureaucrat const &executor) const = 0;
		void			beSigned(Bureaucrat const &sign);

		std::string		getName(void) const;
		bool			getSigned(void) const;
		int				getReqGrade(void) const;
		int				getExecGrade(void) const;

		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class notSigned : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};


std::ostream	&operator<<(std::ostream &out, AForm &obj);
