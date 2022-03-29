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
		Bureaucrat&	operator=( const Bureaucrat& rhs );
		~Bureaucrat( void );
		const	std::string getName( void ) const;
		int		getGrade( void ) const;
		void	addGrade( int add );
		void	removeGrade( int remove );
        void    signForm ( Form &signedForm );
        void    executeForm( Form const& form);

	private:
		const std::string	name_;
		int	grade_;

    protected:
		struct GradeTooLowException : public std::exception {
			const char * what () const throw ();
		};

		struct GradeTooHighException: public std::exception {
			const char * what () const throw ();
		};
};

std::ostream& operator<<( std::ostream& os, const Bureaucrat& src );

#endif
