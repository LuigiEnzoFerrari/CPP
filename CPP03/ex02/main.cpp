#include "ScavTrap.hpp"

int main(void) {
    ScavTrap oi;

    oi.attack("him");
    oi.takeDamage(10);
    oi.takeDamage(10);
    oi.takeDamage(10);
    oi.takeDamage(10);
    oi.beRepaired(1);
    oi.beRepaired(1);
    oi.beRepaired(1);
    oi.beRepaired(1);
    return (0);
}