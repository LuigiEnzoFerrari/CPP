#ifndef PhoneBook_H
#define PHoneBook_H

#include <string>
#include <iostream>

int	get_index() {
	int	index;

	std::cout << "select a index" << std::endl;
	std::cin >> std::ws;
	std::cin >> index;
	return (index);
}

class Contacts {
	private:
		std::string    get_contact(const char *str) {
			std::string input;

			std::cout << str << std::endl;
			std::cin >> std::ws;
			std::getline(std::cin, input);
			return input;
	}

	public:
		std::string	first_name;
		std::string	last_name;
		std::string	nick_name;
		std::string	phone_number;
		std::string	darkest_secret;
		int	empty;

		Contacts() {
			this->empty = 1;
		}
		void get_contact_info() {
			first_name = get_contact("First Name");
			last_name = get_contact("Last Name");
			nick_name = get_contact("Nick Name");
			phone_number = get_contact("Phone Number");
			darkest_secret = get_contact("Darkest Secret");
			empty = 0;
		}
};

class PhoneBook {
	private:
		int	n;
	public:
		Contacts contatos[8];
		PhoneBook() {
			this->n = 0;
		}

		void	add_contacts(Contacts contato) {
			contatos[n % 8] = contato;
			n++;
		}

		void	print_contact(int i) {
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
				std::cout << i << " | ";
				std::cout << contatos[i].first_name << " | ";
				std::cout << contatos[i].last_name << " | ";
				std::cout << contatos[i].nick_name << " | ";
				std::cout << contatos[i].first_name << std::endl;
			}
		}

		void	print_contacts() {
			for (int i = 0; i < n || i == 7; i++) {
				print_contact(i);
			}
		}
};

#endif
