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
	Contact contato;
	while (42) {
		std::cout << "Enter one of the following three commands" << std::endl;
		std::cout << "ADD SEARCH EXIT" << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0) {
			contato.get_contact_info();
			phone.add_contacts(contato);
		}
		else if (input.compare("SEARCH") == 0) {
			phone.print_contacts();
			std::cout << "Choose one index" << std::endl;
			phone.print_contact(get_index());
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
