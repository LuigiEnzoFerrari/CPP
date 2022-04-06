#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):
    Form("PresidentialPardonForm", 25, 5), _target("house") {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
    Form("PresidentialPardonForm", 25, 5), _target(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
    Form("PresidentialPardonForm", 25, 5) {
    this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    if (this == &rhs) {
        this->_target = rhs._target;
    }
    return (*this);
}

const std::string PresidentialPardonForm::getTarget( void ) const {
    return (this->_target);
}

void	PresidentialPardonForm::execute( Bureaucrat& bure ) const {
    if (this->getSigned() == false) {
        throw PresidentialPardonForm::IsNotSignedToExecute();
    } else if (this->getGradeToExec() < bure.getGrade()) {
		throw PresidentialPardonForm::GradeTooLowException();
	} else {
        std::cout << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}
