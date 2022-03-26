#include "Bureaucrat.hpp"

int main(void) {
    Bureaucrat  ola("luigi", 45);

    try {
        std::cout << ola.getName() << ola.getGrade() << std::endl;
    }
    catch (const std::exception & e) {
        std::cout << "Deu merda" << e.what() << std::endl;
    }

    try {
        ola.addGrade(130);
        std::cout << ola.getName() << ola.getGrade() << std::endl;
    }
    catch (const std::exception & e) {
        std::cout << "Deu merda" << e.what() << std::endl;
    }

    try {
        ola.removeGrade(25);
        std::cout << ola.getName() << ola.getGrade() << std::endl;
    }
    catch (const std::exception & e) {
        std::cout << "Deu merda" << e.what() << std::endl;
    }
    return (0);
}
