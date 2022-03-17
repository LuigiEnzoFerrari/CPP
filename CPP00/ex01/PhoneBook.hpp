#ifndef PhoneBook_H
#define PhoneBook_H
#include "Contact.hpp"

class   PhoneBook {
	private:
		int	n;
	public:
		Contact contatos[8];
		PhoneBook();
		void	add_contacts(Contact contato);
		void	print_contact(int i);
		void	print_contacts();
};

#endif
