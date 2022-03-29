#include "RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm( void ):
	Form("RobotmyRequestForm", 72, 45), target_("house") {
}

RobotmyRequestForm::RobotmyRequestForm( std::string target ):
	Form("RobotmyRequestForm", 72, 45), target_(target) {
}

RobotmyRequestForm::RobotmyRequestForm(RobotmyRequestForm const &src):
	Form("RobotmyRequestForm", 72, 45) {
	this->target_ = src.target_;
}

RobotmyRequestForm::~RobotmyRequestForm( void ) {
}

RobotmyRequestForm &RobotmyRequestForm::operator=(const RobotmyRequestForm& rhs) {
	if (this == &rhs) {
		this->target_ = rhs.target_;
	}
	return (*this);
}

const std::string RobotmyRequestForm::getTarget( void ) const {
	return (this->target_);
}

void	RobotmyRequestForm::execute( Bureaucrat& bure ) const {
	srand(time(NULL));
	if (this->getSigned() == false) {
		throw RobotmyRequestForm::IsNotSignedToExecute();
	} else if (this->getGradeExec() < bure.getGrade()) {
		throw RobotmyRequestForm::GradeTooLowException();
	} else {
		std::cout << "Bip bop bip bop " << std::endl;
		if (std::rand() % 2) {
			std::cout << target_ << " has been robotomized" << std::endl;
		} else {
			std::cout << target_ << " hasn't been robotomized" << std::endl;
		}
	}
}
