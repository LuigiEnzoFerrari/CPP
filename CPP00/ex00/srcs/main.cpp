#include <iostream>
#include <cstring>

void print_text_world(std::string text) {
    for (std::string::size_type i = 0; i < text.size(); i++) {
        std::cout << static_cast<char>(toupper(text[i]));
    }
}

void print_text_line(char **argv) {
    while (*argv) {
        print_text_world(*argv);
        if (*(++argv)) {
            std::cout << " ";
        }
    }
}

int main( int argc, char **argv ) {
    argc = (int)argc;
    if (*(++argv)) {
        print_text_line(argv); 
    } else {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
}
