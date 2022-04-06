#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>

# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form {
	public:
		Form( void );
		Form( std::string name, const int grade, const int gradeExec );
		Form( const Form& src );
		Form&	operator=( const Form& rhs );
		~Form( void );
		const	std::string getName( void ) const;
		int		getGradeToExec( void ) const;
		int		getGradeToSign( void ) const;
		bool	getSigned( void ) const;
		void	beSigned( Bureaucrat& bure );
	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

		struct GradeTooLowException : public std::exception {
			const char * what () const throw ();
		};

		struct GradeTooHighException: public std::exception {
			const char * what () const throw ();
		};
};

std::ostream& operator<<( std::ostream& os, const Form& src );

#endif
