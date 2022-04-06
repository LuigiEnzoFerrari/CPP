#ifndef CONVERSION_H
# define CONVERSION_H

# include <iostream>
# include <cctype>
# include <cstdlib>
class Conversion {
	public:
		Conversion ( void );
		Conversion ( std::string target );
		Conversion ( const Conversion& src );
		Conversion& operator=( const Conversion& rhs );
		~Conversion ( void );

		char	toChar( void ) const;
		int		toInt( void ) const;
		float	toFloat( void ) const;
		double	toDouble( void ) const;

		void    setTarget( std::string target );
		std::string	getTarget( void ) const;

	private:
		std::string	_target;

		struct NotaValidInput: public std::exception {
			const char *what() const throw();
		};
};

#endif
