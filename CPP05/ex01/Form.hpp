#ifndef FORM_HPP
# define FORM_HPP

# include <exception>
# include <iostream>

# include "Bureaucrat.hpp"

class	Bureaucrat;

class Form {
	public:
		Form( void );
		Form( std::string name, int grade, int gradeExec );
		Form( const Form& src );
		Form&	operator=( const Form& rhs );
		~Form( void );
		const	std::string getName( void ) const;
		int		getGradeExec( void ) const;
		int		getGradeMin( void ) const;
		bool	getSigned( void ) const;
		void	beSigned( Bureaucrat& bure );
	private:
		const std::string	name_;
		bool				isSigned_;
		const int			gradeMin_;
		const int			gradeExec_;

		struct GradeTooLowException : public std::exception {
			const char * what () const throw ();
		};

		struct GradeTooHighException: public std::exception {
			const char * what () const throw ();
		};
};

std::ostream& operator<<( std::ostream& os, const Form& src );

#endif
