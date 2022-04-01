#include "Harl.hpp"

int main(void) {
    Harl one;

    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (size_t i = 0; i < 4; i++) {
        std::cout << "[" + levels[i] + "]" << std::endl;
        one.complain(levels[i]);
        std::cout << std::endl;
    }
    return (0);
}