#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):
    Form("PresidentialPardonForm", 25, 5), target_("house") {
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ):
    Form("PresidentialPardonForm", 25, 5), target_(target) {
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):
    Form("PresidentialPardonForm", 25, 5) {
    this->target_ = src.target_;
}

PresidentialPardonForm::~PresidentialPardonForm( void ) {
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs) {
    if (this == &rhs) {
        this->target_ = rhs.target_;
    }
    return (*this);
}

const std::string PresidentialPardonForm::getTarget( void ) const {
    return (this->target_);
}

void	PresidentialPardonForm::execute( Bureaucrat& bure ) const {
    if (this->getSigned() == false) {
        throw PresidentialPardonForm::IsNotSignedToExecute();
    } else if (this->getGradeExec() < bure.getGrade()) {
		throw PresidentialPardonForm::GradeTooLowException();
	} else {
        std::cout << target_ << " has been pardoned by Zaphod Beeblebrox" << std::endl;
    }
}
