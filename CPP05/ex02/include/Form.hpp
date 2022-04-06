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
		virtual ~Form( void );
		const	std::string getName( void ) const;
		int		getGradeToExec( void ) const;
		int		getGradeToSign( void ) const;
		bool	getSigned( void ) const;
		void	beSigned( Bureaucrat& bure );
        virtual void    execute( Bureaucrat& bure ) const = 0;

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExec;

    protected:
		struct GradeTooLowException : public std::exception {
			const char * what () const throw ();
		};

		struct GradeTooHighException: public std::exception {
			const char * what () const throw ();
		};

		struct IsNotSignedToExecute : public std::exception {
			const char * what () const throw ();
		};
};

std::ostream& operator<<( std::ostream& os, const Form& src );

#endif
