#ifndef SHRUBERRYCREATIONFORM_H
# define SHRUBERRYCREATIONFORM_H
# include "Form.hpp"
# include <fstream>

class   ShrubberyCreationForm: public Form {
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &src);
		ShrubberyCreationForm& operator=( const ShrubberyCreationForm& rhs);
		~ShrubberyCreationForm( void );
		void	execute( Bureaucrat& bure ) const;
		const std::string getTarget( void ) const;
	private:
		std::string	_target;
};

#endif
