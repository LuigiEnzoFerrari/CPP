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

Bureaucrat   &Bureaucrat::operator++( void ) {
	if (this->getGrade() - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = this->getGrade() - 1;
	return (*this);
}

Bureaucrat   Bureaucrat::operator++( int ) {
	Bureaucrat temp(*this);

	if (this->getGrade() - 1 < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade = this->getGrade() - 1;
	return (temp);
}

Bureaucrat&	Bureaucrat::operator--( void ) {
	if (this->getGrade() + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = this->getGrade() + 1;
	return (*this);
}

Bureaucrat   Bureaucrat::operator--( int ) {
	Bureaucrat temp(*this);
	if (this->getGrade() + 1 > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade = this->getGrade() + 1;
	return (temp);
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
				return "Grade is Too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
				return "Grade is Too Low";
}

const	std::string Bureaucrat::getName( void ) const {
	return (this->_name);
}

int	Bureaucrat::getGrade( void ) const {
	return (this->_grade);
}

void	Bureaucrat::downGrade( int add ) {
	if (this->_grade + add > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	this->_grade += add;
}

void	Bureaucrat::upGrade( int remove ) {
	if (this->_grade - remove < 1) {
		throw Bureaucrat::GradeTooHighException();
	}
	this->_grade -= remove;
}

std::ostream& operator<<( std::ostream& os, const Bureaucrat& src ) {
	os << src.getName() << ", bureaucrat grade" << src.getGrade() << std::endl;
	return (os);
}
