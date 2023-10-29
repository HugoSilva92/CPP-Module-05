#pragma once

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;
class Bureaucrat;

class Intern{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const &obj);
		Intern &operator=(Intern const &obj);

		AForm*	makeForm(std::string name, std::string target);
		AForm*	robotForm(std::string target);
		AForm*	presForm(std::string target);
		AForm*	shrubForm(std::string target);
		class FormNotFoundException : public std::exception{
			public:
				virtual const char* what() const throw();
		};
};
