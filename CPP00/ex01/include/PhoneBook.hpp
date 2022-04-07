#ifndef PhoneBook_H
#define PhoneBook_H
#include "Contact.hpp"

class   PhoneBook {
	private:
		int	n;
	public:
		Contact contacts[8];
		PhoneBook();
		void	addContacts(Contact contact);
		void	printContactInfo(int i);
		void	printContacts();
        void    displayContact( std::string contact) const;
};

#endif
