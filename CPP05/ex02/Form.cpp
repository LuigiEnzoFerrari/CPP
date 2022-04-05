#include "Form.hpp"

Form::Form( void ):
	_name("Default Form"),
	isSigned_(false),
	gradeMin_(75),
	gradeExec_(75) {
}

Form::Form( std::string name, int grade, int gradeExec ):
	_name(name),
	isSigned_(false),
	gradeMin_(grade),
	gradeExec_(gradeExec) {
	if ( this->gradeMin_ < 1 || this->gradeExec_ < 1 ) {
		throw Form::GradeTooHighException();
	} else if( this->gradeMin_ > 150 || this->gradeExec_ > 150 ) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(Form const &src):
	_name(src.getName()),
	isSigned_(src.getSigned()),
	gradeMin_(src.getGradeMin()),
	gradeExec_(src.getGradeExec()) {
}

Form::~Form( void ) {
}

Form &Form::operator=(const Form& rhs) {
	if (this != &rhs) {
		this->isSigned_ = rhs.getSigned();
	}
	return (*this);
}

const char *Form::GradeTooHighException::what() const throw() {
	return "Grade is Too High";
}

const char *Form::GradeTooLowException::what() const throw() {
	return "Grade is Too Low";
}

const char *Form::IsNotSignedToExecute::what() const throw() {
	return "Is Not Signed To Execute";
}

const	std::string Form::getName( void ) const {
	return (this->_name);
}

bool	Form::getSigned( void ) const {
	return (this->isSigned_);
}

int	Form::getGradeMin( void ) const {
	return (this->gradeMin_);
}

int	Form::getGradeExec( void ) const {
	return (this->gradeExec_);
}

void	Form::beSigned( Bureaucrat& bure) {
	if (this->gradeMin_ < bure.getGrade()) {
		this->isSigned_ = false;
		throw Form::GradeTooLowException();
	} else {
		this->isSigned_ = true;
	}
}

std::ostream& operator<<( std::ostream& os, const Form& src ) {
	os << src.getName() << ", Form grade" << src.getGradeMin() << std::endl;
	return (os);
}
