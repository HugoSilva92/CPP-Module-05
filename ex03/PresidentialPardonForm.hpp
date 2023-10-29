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

		virtual void	typeExecute(void) const;
		std::string		getTarget(void) const;
};
