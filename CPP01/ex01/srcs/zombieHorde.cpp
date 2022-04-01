#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ) {
    Zombie *zombie_horde;

    zombie_horde = new Zombie [N];
    while (N--)
        zombie_horde[N].create_zombie( name );
    return zombie_horde;
}
