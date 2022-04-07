#include "Contact.hpp"

std::string	Contact::get_contact(const char *str) {
	std::string input;

	std::cout << str << std::endl;
	std::cin >> std::ws;
	std::getline(std::cin, input);
	return (input);
}

void Contact::getInputInfos() {
	this->_firstName = get_contact("First Name");
	this->_lastName = get_contact("Last Name");
	this->_nickName = get_contact("Nick Name");
	this->_phoneNumber = get_contact("Phone Number");
	this->_darkestSecret = get_contact("Darkest Secret");
}

Contact::Contact( void ) {
}

std::string Contact::getFirstName( void ) const {
    return (this->_firstName);
}

std::string Contact::getLastName( void ) const {
    return (this->_lastName);
}

std::string Contact::getNickname( void ) const {
    return (this->_nickName);
}

std::string Contact::getPhoneNumber( void ) const {
    return (this->_phoneNumber);
}

std::string Contact::getDarkestSecret( void ) const {
    return (this->_darkestSecret);
}
