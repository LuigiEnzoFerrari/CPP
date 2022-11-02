#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ): _size(0) {};

PhoneBook::~PhoneBook( void ) {};

PhoneBook::PhoneBook( const PhoneBook &src ): _size(src._size) {
	*this = src;
};

PhoneBook&	PhoneBook::operator=( const PhoneBook& rhs ) {
	if ( this != &rhs ) {
		for (int i = 0; i < 8; i++) {
			this->_contacts[i] = rhs._contacts[i];
		}
		this->_size = rhs._size;
	}
	return ( *this );
};

int	PhoneBook::size( void ) {
	if (this->_size < 8)
		return ( this->_size );
	return ( 8 );
};

void	PhoneBook::addContact( const Contact& contact ) {
	this->_contacts[this->_size % 8] = contact;
	this->_size++;
};

Contact* PhoneBook::getContacts( void ) {
	return (this->_contacts);
}