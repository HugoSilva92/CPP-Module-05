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

		virtual void	typeExecute(void) const;
		std::string		getTarget(void) const;
};
