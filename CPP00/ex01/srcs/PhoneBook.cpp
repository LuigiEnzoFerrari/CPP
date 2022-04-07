#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->n = 0;
}

void	PhoneBook::displayContact( std::string contact) const {
	std::cout << " | ";
	if (contact.length() < 10) {
		std::cout.width( 10 );
		std::cout << contact;

	}
	else
		std::cout << contact.substr(0, 9) << ".";
}

void	PhoneBook::addContacts(Contact contact) {
	this->contacts[n % 8] = contact;
	n++;
}

void	PhoneBook::printContactInfo(int i) {
	if (i > 7) {
		std::cout << "Out of range" << std::endl;
	}
	else if (i >= n) {
		std::cout << "There is no such contact" << std::endl;
	}
	else if (i < 0) {
		std::cout << "Invalid number" << std::endl;
	}
	else {
		std::cout << std::endl
			<< "First name: " << this->contacts[i].getFirstName() << std::endl
			<< "Last name: " << this->contacts[i].getLastName() << std::endl
			<< "Nickname: " << this->contacts[i].getNickname() << std::endl
			<< "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl
			<< "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
	}
	std::cout << std::endl;
}

void	PhoneBook::printContacts() {
	for (int i = 0; i < n && i <= 7; i++) {
		std::cout << i;
		this->displayContact(this->contacts[i].getFirstName());
		this->displayContact(this->contacts[i].getLastName());
		this->displayContact(this->contacts[i].getNickname());
		std::cout << std::endl;
	}
	std::cout << std::endl;
}
