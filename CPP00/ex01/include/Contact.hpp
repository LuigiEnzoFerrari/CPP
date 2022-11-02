#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <cstring>
#include <iostream>

class Contact {
	public:
		Contact( void );
		~Contact( void );
		Contact( const Contact& src );
		Contact&	operator=( const Contact& rhs );
		std::string	getName( void );
		std::string	getLastName( void );
		std::string	getNickName( void );
		std::string	getPhoneNumber( void );
		std::string	getDarkestSecret( void );
		void	setName( std::string name );
		void	setLastName( std::string lastName );
		void	setNickName( std::string nickName );
		void	setPhoneNumber( std::string phoneNumber );
		void	setDarkestSecret( std::string darkestSecret );

	private:
		std::string	_name;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkesSecret;
};
#endif
