#include "PhoneBook.hpp"

static void	displayContactInfos( Contact &contacts ) {
	std::cout << "First Name: " << contacts.getName() << std::endl;
	std::cout << "Last Name: " << contacts.getLastName() << std::endl;
	std::cout << "Nick Name: " << contacts.getNickName() << std::endl;
	std::cout << "Darkest Secret: " << contacts.getDarkestSecret() << std::endl;
	std::cout << "Phone Number: " << contacts.getPhoneNumber() << std::endl;
}

std::string	getInfos( std::string info_name ) {
	std::string	info;
	std::cout << info_name << std::endl;
	std::getline(std::cin, info);
	return (info);
}

static int	add( PhoneBook &phonebook ) {
	Contact	contacts;

	std::cout << "Write your informations as follow:" << std::endl;
	contacts.setName(getInfos("First Name"));
	contacts.setLastName(getInfos("Last Name"));
	contacts.setDarkestSecret(getInfos("Darkest Secret"));
	contacts.setNickName(getInfos("Nick Name"));
	contacts.setPhoneNumber(getInfos("Phone Number"));
	phonebook.addContact(contacts);
	return (0);
}

static void	formatContact(std::string contact) {
	if (contact.length() < 10) {
		std::cout.width( 10 );
		std::cout << contact;
	} else {
		std::cout << contact.substr(0, 9) << ".";
	}
}

static void	displayContact( Contact &contact ) {
	formatContact(contact.getName());
	std::cout << " | ";
	formatContact(contact.getLastName());
	std::cout << " | ";
	formatContact(contact.getNickName());
	std::cout << std::endl;
}

static int	getIndex( void ) {
	int			index;
	std::string	cin_var;

	std::getline(std::cin, cin_var);
	if (cin_var.length() == 1 && std::isdigit(cin_var[0]))
		index = std::atoi(cin_var.c_str());
	else {
		index = -1;
	}
	return (index);
}

static int	search(PhoneBook& phonebook) {
	int	index;

	for (int i = 0; i < phonebook.size(); i++) {
		std::cout << i << " | ";
		displayContact(phonebook.getContacts()[i]);
	}
	std::cout << "Put the contact index:" << std::endl;
	index = getIndex();
	if ( index < 0 || index > phonebook.size() - 1 )
		std::cout << "Invalid number" << std::endl;
	else {
		displayContactInfos(phonebook.getContacts()[index]);
	}
	return (0);
}

int	myAwesomePhoneBook( PhoneBook &phonebook ) {
	std::string	command;
	std::cout << "Enter a command ADD, SEARCH and EXIT" << std::endl;
	std::getline(std::cin, command);
	if (command.compare("ADD") == 0)
		add(phonebook);
	else if (command.compare("SEARCH") == 0) {
		if (phonebook.size() == 0) {
			std::cerr << "There is no contact" << std::endl;
		} else {
			search(phonebook);
		}
	} else if (command.compare("EXIT") == 0) {
		std::cout << "MUST BE EXIT" << std::endl;
		return (1);
	} else
		std::cout << "TRY AGAIN" << std::endl;
	return (0);
}
