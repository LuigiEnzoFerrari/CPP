#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( void ):
	Form("RobotmyRequestForm", 72, 45), _target("house") {
}

RobotmyRequestForm::RobotmyRequestForm( std::string target ):
	Form("RobotmyRequestForm", 72, 45), _target(target) {
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &src):
	Form("RobotmyRequestForm", 72, 45) {
	this->_target = src._target;
}

RobotmyRequestForm::~RobotmyRequestForm( void ) {
}

RobotmyRequestForm &RobotmyRequestForm::operator=(const RobotmyRequestForm& rhs) {
	if (this == &rhs) {
		this->_target = rhs._target;
	}
	return (*this);
}

const std::string RobotmyRequestForm::getTarget( void ) const {
	return (this->_target);
}

void	RobotmyRequestForm::execute( Bureaucrat& bure ) const {
	std::srand(time(NULL));
	if (this->getSigned() == false) {
		throw RobotmyRequestForm::IsNotSignedToExecute();
	} else if (this->getGradeToExec() < bure.getGrade()) {
		throw RobotmyRequestForm::GradeTooLowException();
	} else {
		std::cout << "Bip bop bip bop " << std::endl;
		if (std::rand() % 2) {
			std::cout << _target << " has been robotomized" << std::endl;
		} else {
			std::cout << _target << " hasn't been robotomized" << std::endl;
		}
	}
}
