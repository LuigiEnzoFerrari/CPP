#ifndef ROBOTMYREQUESTFORM_H
# define ROBOTMYREQUESTFORM_H
#include "Form.hpp"

class   RobotmyRequestForm: public Form {
	public:
		RobotmyRequestForm( void );
		RobotmyRequestForm( std::string target );
		RobotmyRequestForm( RobotmyRequestForm const &src);
		RobotmyRequestForm& operator=( const RobotmyRequestForm& rhs);
		~RobotmyRequestForm( void );
		void	execute( Bureaucrat& bure ) const;
		const std::string getTarget( void  ) const;
	private:
		std::string	target_;
};

#endif
