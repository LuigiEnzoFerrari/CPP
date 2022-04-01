#include "Zombie.hpp"

void    randomChump(std::string name);
Zombie* newZombie(std::string name);

int main(void) {
    Zombie *new_zombie;

    new_zombie = newZombie("Michael Jackson");
    new_zombie->annouce();
    delete new_zombie;
    randomChump("Kisara");
    return (0);
}
