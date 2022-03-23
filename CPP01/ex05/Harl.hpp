#ifndef HARL_H
# define HARL_H
# include <iostream>

class Harl {
	private:
		void    debug( void );
		void    info( void );
		void    warning( void );
		void    error( void );
	public:
		Harl(void);
		Harl(const Harl& rhs);
		Harl&   operator=(const Harl& rhs);
		void    complain( std::string level);
		~Harl();
};

#endif
