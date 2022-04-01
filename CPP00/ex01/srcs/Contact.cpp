#include "Contact.hpp"

std::string	Contact::get_contact(const char *str) {
	std::string input;

	std::cout << str << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, input);
	return (input);
}

void Contact::get_contact_info() {
	this->first_name = get_contact("First Name");
	this->last_name = get_contact("Last Name");
	this->nick_name = get_contact("Nick Name");
	this->phone_number = get_contact("Phone Number");
	this->darkest_secret = get_contact("Darkest Secret");
}

Contact::Contact( void ) {
}
