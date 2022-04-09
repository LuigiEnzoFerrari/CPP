#ifndef REPLACESTRINGS_HPP
# define REPLACESTRINGS_HPP

#include <iostream>
#include <exception>

class ReplaceStrings {
	private:
		std::string	*_text;
		std::string	_from;
		std::string	_to;
		void   _checkStrings( void ) {
			if (this->_text == NULL)
				throw ReplaceStrings::textNotSet();
			if (this->_from.empty())
				throw ReplaceStrings::fromNotSet();
		}

	public:
		ReplaceStrings( void );
		ReplaceStrings( std::string* text, std::string from, std::string to );
		ReplaceStrings( ReplaceStrings const & src ) { *this = src; };
		ReplaceStrings & operator=( ReplaceStrings const & rhs );
		~ReplaceStrings( void );

		std::string* getText( void ) const;
		std::string getFrom( void ) const;
		std::string getTo( void ) const;

		void setText( std::string* text );
		void setFrom( std::string from );
		void setTo( std::string to );

		std::string	replace( void );
		struct textNotSet : public std::exception {
			virtual const char* what() const throw();
		};
		struct fromNotSet : public std::exception {
			virtual const char* what() const throw();
		};
};

#endif
