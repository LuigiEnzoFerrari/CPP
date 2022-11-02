#include "Contact.hpp"

Contact::Contact( void ) {};

Contact::~Contact( void ) {};

Contact::Contact( const Contact& src ) {
	*this = src;
};

Contact& Contact::operator=( const Contact& rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_lastName = rhs._lastName;
		this->_nickName = rhs._nickName;
		this->_phoneNumber = rhs._phoneNumber;
		this->_darkesSecret = rhs._darkesSecret;
	}
	return (*this );
}

std::string	Contact::getName( void ) {
	return ( this->_name );
};

std::string	Contact::getLastName ( void ) {
	return ( this->_lastName );
}

std::string	Contact::getDarkestSecret( void ) {
	return ( this->_darkesSecret );
}

std::string Contact::getPhoneNumber ( void ) {
	return ( this->_phoneNumber );
}

std::string Contact::getNickName ( void ) {
	return ( this->_nickName );
}

void	Contact::setName( std::string name ) {
	this->_name = name;
}

void	Contact::setLastName( std::string lastName ) {
	this->_lastName = lastName;
}

void	Contact::setNickName( std::string nickName ) {
	this->_nickName = nickName;
}

void	Contact::setDarkestSecret( std::string darkestSecret ) {
	this->_darkesSecret = darkestSecret;
}

void	Contact::setPhoneNumber( std::string phoneNumber ) {
	this->_phoneNumber = phoneNumber;
}
