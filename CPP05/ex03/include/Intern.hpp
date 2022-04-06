#ifndef INTERN_H
# define INTERN_H

# include "Form.hpp"
# include "PresidentialPardonForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotmyRequestForm.hpp"

class Intern {
	public:
		Intern( void );
		Intern( Intern& src );
		~Intern( void );
		Intern&	operator=( const Intern& rhs );
		Form	*makeForm( std::string name, std::string target );
	private:
		Form	*makePresidentialPardonForm( std::string target );
		Form	*makeShrubberyCreationForm( std::string target);
		Form	*makeRobotmyRequestForm( std::string target);
};

#endif
