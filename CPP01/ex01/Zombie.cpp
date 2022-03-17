#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "lenzo";
}
void    Zombie::create_zombie(std::string naming) {
    this->name = naming;
}

Zombie::~Zombie() {
    std::cout << this->name + " has died" << std::endl;
}

void   Zombie::annouce(void) {
    std::cout << this->name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
