#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): name_("lenzo"), grade_(75) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ): name_(name), grade_(grade) {
	if ( grade < 1 ) {
		throw Bureaucrat::GradeTooHighException();
	} else if( grade > 150 ) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): grade_(src.getGrade()) {
}

Bureaucrat::~Bureaucrat( void ) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (this != &rhs) {
		this->grade_ = rhs.getGrade();
	}
	return (*this);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
				return "TooFuckingHigh";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
				return "TooFuckingLow";
}

const	std::string Bureaucrat::getName( void ) const {
	return (this->name_);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->grade_);
}

void	Bureaucrat::addGrade( int add ) {
	this->grade_ += add;
	if (this->grade_ > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (this->grade_ < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::removeGrade( int remove ) {
	this->grade_ -= remove;
	if (this->grade_ < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (this->grade_ > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::signForm( Form &signedForm ) {
	if (signedForm.getSigned() == true) {
		std::cout << this->name_ << " signed " << signedForm.getName() << std::endl;
	} else {
		std::cout << this->name_ << " couldn't sign " << signedForm.getName()
		<< " because "
		<< "Or he has Low Grade or he didn't fill the form, other Low Grade bureaucrat did it."
		<< std::endl;
	}
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& src ) {
	os << src.getName() << ", bureaucrat grade" << src.getGrade() << std::endl;;
	return (os);
}
