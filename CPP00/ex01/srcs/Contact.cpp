#include "Contact.hpp"

std::string    Contact::get_contact(const char *str) {
    std::string input;

    std::cout << str << std::endl;
    std::cin >> std::ws;
    std::getline(std::cin, input);
    return (input);
}

void Contact::get_contact_info() {
    first_name = get_contact("First Name");
    last_name = get_contact("Last Name");
    nick_name = get_contact("Nick Name");
    phone_number = get_contact("Phone Number");
    darkest_secret = get_contact("Darkest Secret");
    empty = 0;
}

Contact::Contact() {
    this->empty = 1;
}
