#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
    this->n = 0;
}

void	PhoneBook::add_contacts(Contact contato) {
    contatos[n % 8] = contato;
    n++;
}

void	PhoneBook::print_contact(int i) {
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

void	PhoneBook::print_contacts() {
    for (int i = 0; i < n || i == 7; i++) {
        print_contact(i);
    }
}
