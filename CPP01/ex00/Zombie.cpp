#include "Zombie.hpp"

Zombie::Zombie(std::string naming) {
    this->name = naming;
}

Zombie::~Zombie() {
    std::cout << this->name + " has died" << std::endl;
}

void   Zombie::annouce(void) {
    std::cout << name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
