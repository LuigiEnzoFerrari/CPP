#include "Intern.hpp"

Intern::Intern( void ) {
}

Intern::Intern( Intern& src ) {
	*this = src;
}

Intern::~Intern( void ) {
}

Intern& Intern::operator=( const Intern& rhs ) {
	if ( this != &rhs ) {
	}
	return (*this);
}

Form	*Intern::makePresidentialPardonForm( std::string target ) {
	return (new PresidentialPardonForm(target));
}

Form	*Intern::makeShrubberyCreationForm( std::string target ) {
	return (new ShrubberyCreationForm(target));
}

Form	*Intern::makeRobotmyRequestForm( std::string target ) {
	return (new RobotmyRequestForm(target));
}

Form* Intern::makeForm( std::string name, std::string target ) {
	std::string types[3] = {"shrubbery creation",
		"robotomy request",
		"presidential pardon"};
	Form    *(Intern::*forms[3])(std::string target) = {
		&Intern::makeShrubberyCreationForm,
		&Intern::makeRobotmyRequestForm,
		&Intern::makePresidentialPardonForm};

	for (size_t i = 0; i < 3; i++) {
		if (types[i] == name) {
			std::cout << "Intern creates " << types[i] << std::endl;
			return ((this->*forms[i])(target));
		}
	}
	std::cout << "This type of Form doesn't exists" << std::endl;
	return (NULL);
}
