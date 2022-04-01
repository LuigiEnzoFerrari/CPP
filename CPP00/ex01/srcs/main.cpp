#include "PhoneBook.hpp"

int	get_index() {
	int	index;

	std::cout << "select a index" << std::endl;
	std::cin >> std::ws;
	std::cin >> index;
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
			std::cout << "Choose one index man" << std::endl;
			phone.print_contact(get_index());
		}
		else if (input.compare("EXIT") == 0)
			break ;
	}
	return (0);
}
