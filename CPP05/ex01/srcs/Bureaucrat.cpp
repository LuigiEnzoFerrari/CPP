#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("lenzo"), _grade(75) {
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade) {
	if ( grade < 1 ) {
		throw Bureaucrat::GradeTooHighException();
	} else if( grade > 150 ) {
		throw Bureaucrat::GradeTooLowException();
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &src): _grade(src.getGrade()) {
}

Bureaucrat::~Bureaucrat( void ) {
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& rhs) {
	if (this != &rhs) {
		this->_grade = rhs.getGrade();
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
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::addGrade( int add ) {
	this->_grade += add;
	if (this->_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	} else if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
}

void	Bureaucrat::removeGrade( int remove ) {
	this->_grade -= remove;
	if (this->_grade < 1) {
		throw Bureaucrat::GradeTooHighException();
	} else if (this->_grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
}

void	Bureaucrat::signForm( Form &signedForm ) {
    try {
        signedForm.beSigned(*this);
		std::cout << this->_name << " signed " << signedForm.getName() << std::endl;
    } catch (std::exception &e) {
        std::cout << this->getName()
            << " couldn't sign "<< signedForm.getName()
            << " because " << e.what() << std::endl;
    }
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& src ) {
	os << src.getName() << ", bureaucrat grade" << src.getGrade() << std::endl;;
	return (os);
}
