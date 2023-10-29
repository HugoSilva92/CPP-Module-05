#pragma once

#include "AForm.hpp"
#include <fstream>
#include <cstdlib>

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

		virtual void	typeExecute(void) const;
		std::string		getTarget(void) const;
};
