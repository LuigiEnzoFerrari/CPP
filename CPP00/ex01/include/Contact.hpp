#ifndef CONTACTS_H
# define CONTACTS_H

#include <string>
#include <iostream>

class Contact {
	private:
		std::string    get_contact(const char *str);
	public:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickName;
		std::string	_phoneNumber;
		std::string	_darkestSecret;

		std::string getFirstName( void ) const;
		std::string getLastName( void ) const;
		std::string getNickname( void ) const;
		std::string getPhoneNumber( void ) const;
		std::string getDarkestSecret( void ) const;
		Contact( void );
		void getInputInfos();
};

#endif
