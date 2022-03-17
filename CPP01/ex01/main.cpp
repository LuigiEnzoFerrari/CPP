#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main(void) {
    Zombie *new_horde;
    Zombie *two;
    size_t  i;
    i = 7;
    new_horde = zombieHorde(i, "joao");
    while (i--)
        new_horde->annouce();
    delete[] new_horde;
    two = new Zombie;
    two->annouce();
    delete two;
    return (0);
}
