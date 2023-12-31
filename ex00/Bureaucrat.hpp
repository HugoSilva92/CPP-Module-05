#pragma once

#include <iostream>
#include <exception>

// to creat personalized exceptions: https://rollbar.com/blog/cpp-custom-exceptions/#
// about the try throw and catch: https://cplusplus.com/doc/tutorial/exceptions/
// about the *what: https://en.cppreference.com/w/cpp/error/exception/what
class Bureaucrat{
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
		class GradeTooHighException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
		class GradeTooLowException : public std::exception{
			public:
				virtual const char *what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, Bureaucrat const &obj);
