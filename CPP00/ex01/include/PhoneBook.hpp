#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
	public:
		PhoneBook( void );
		~PhoneBook( void );
		PhoneBook( const PhoneBook& src );
		PhoneBook& operator=( const PhoneBook& rhs );
		int			size( void );
		void		addContact( const Contact& contacts );
		Contact*	getContacts( void );

	private:
		Contact _contacts[8];
		int		_size;
};

#endif
