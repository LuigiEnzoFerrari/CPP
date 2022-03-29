#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H
#include "Form.hpp"

class   PresidentialPardonForm: public Form {
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &src);
		PresidentialPardonForm& operator=( const PresidentialPardonForm& rhs);
		~PresidentialPardonForm( void );
		void	execute( Bureaucrat& bure ) const;
		const std::string getTarget( void ) const;
	private:
		std::string	target_;
};

#endif
