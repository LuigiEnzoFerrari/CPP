#include "PhoneBook.hpp"
#include <iterator>
#include <stdlib.h>

int	get_index() {
	int	index;
    std::string    str;

	std::cout << "select a index" << std::endl;
	std::cin >> std::ws;
	std::cin >> str;
    for (std::string::iterator it = str.begin(); it != str.end(); ++it) {
        if (!isdigit(*it))
            return -1;
    }
    index = atoi(str.c_str());
	return (index);
}

int main(void) {
	std::string input;
	PhoneBook phone;
	Contact contact;
	while (42) {
		std::cout << "Enter one of the following three commands" << std::endl;
		std::cout << "ADD SEARCH EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0) {
			contact.getInputInfos();
			phone.addContacts(contact);
		}
		else if (input.compare("SEARCH") == 0) {
			phone.printContacts();
			std::cout << "Choose one index" << std::endl;
			phone.printContactInfo(get_index());
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
