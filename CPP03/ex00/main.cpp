#include "ClapTrap.hpp"

int main(void) {
    ClapTrap oi("Turututu");

    oi.attack("hellow");
    oi.beRepaired(23);
    oi.beRepaired(4);
    oi.takeDamage(4);
    oi.takeDamage(4);
    return (0);
}