#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void) {
    Zombie *new_horde;
    Zombie *lenzo;
    size_t  i;

    i = 7;
    new_horde = zombieHorde(i, "joao");
    while (i--)
        new_horde[i].announce();
    delete[] new_horde;
    lenzo = new Zombie;
    lenzo->announce();
    delete lenzo;
    return (0);
}
