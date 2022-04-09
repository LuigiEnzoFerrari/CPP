#include "Zombie.hpp"

Zombie::Zombie( void ): _name("lenzo") {
}

void    Zombie::create_zombie(std::string name) {
    this->_name = name;
}

Zombie::~Zombie( void ) {
    std::cout << this->_name + " has died" << std::endl;
}

void   Zombie::announce( void ) {
    std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
