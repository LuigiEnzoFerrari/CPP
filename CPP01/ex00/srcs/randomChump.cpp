#include "Zombie.hpp"

Zombie* newZombie(std::string name);

void    randomChump(std::string name) {
    Zombie* new_zombie;

    new_zombie = newZombie(name);
    new_zombie->annouce();
    delete (new_zombie);
}
