#include "Form.hpp"

Form::Form( void ):
	_name("Default Form"),
	_isSigned(false),
	_gradeToSign(75),
	_gradeToExec(75){
}

Form::Form( std::string name, const int grade, const int gradeExec ):
	_name(name),
	_isSigned(false),
	_gradeToSign(grade),
	_gradeToExec(gradeExec) {
	if ( this->_gradeToSign < 1 || this->_gradeToExec < 1 ) {
		throw Form::GradeTooHighException();
	} else if( this->_gradeToSign > 150 || this->_gradeToExec > 150 ) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(Form const &src):
	_name(src.getName()),
	_isSigned(src.getSigned()),
	_gradeToSign(src.getGradeToSign()),
	_gradeToExec(src.getGradeToExec()) {
}

Form::~Form( void ) {
}

Form &Form::operator=(const Form& rhs) {
	if (this != &rhs) {
		this->_isSigned = rhs.getSigned();
		const_cast<int &>(this->_gradeToSign) = rhs.getGradeToSign();
		const_cast<int &>(this->_gradeToExec) = rhs.getGradeToExec();
	}
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is Too Low";
}

const	std::string Form::getName( void ) const {
	return (this->_name);
}

bool	Form::getSigned( void ) const {
	return (this->_isSigned);
}

int	Form::getGradeToSign( void ) const {
	return (this->_gradeToSign);
}

int	Form::getGradeToExec( void ) const {
	return (this->_gradeToExec);
}

void	Form::beSigned( Bureaucrat& bure) {
	if (this->_gradeToSign < bure.getGrade()) {
		this->_isSigned = false;
		throw Form::GradeTooLowException();
	} else {
		this->_isSigned = true;
	}
}

std::ostream& operator<<( std::ostream& os, const Form& src ) {
	os << src.getName() << ", Form grade" << src.getGradeToSign() << std::endl;
	return (os);
}
