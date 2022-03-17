#ifndef CONTACTS_H
# define CONTACTS_H

#include <string>
#include <iostream>

class Contact {
	private:
		std::string    get_contact(const char *str);
	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
		int	empty;

		Contact();
		void get_contact_info();
};

#endif
