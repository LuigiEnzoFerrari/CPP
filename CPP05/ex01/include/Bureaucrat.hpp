#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include "Form.hpp"

class   Form;

class Bureaucrat {
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name, int grade );
		Bureaucrat( const Bureaucrat& src );
		~Bureaucrat( void );

		Bureaucrat&	operator=( const Bureaucrat& rhs );
		Bureaucrat&	operator++( void );
		Bureaucrat	operator++( int );
		Bureaucrat&	operator--( void );
		Bureaucrat	operator--( int );

		const	std::string getName( void ) const;
		int		getGrade( void ) const;
		void	downGrade( int add );
		void	upGrade( int remove );
		void    signForm ( Form &signedForm );

	private:
		const std::string	_name;
		int	_grade;

		struct GradeTooLowException : public std::exception {
			const char * what () const throw ();
		};

		struct GradeTooHighException: public std::exception {
			const char * what () const throw ();
		};
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& src );

#endif
