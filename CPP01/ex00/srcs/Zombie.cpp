#include "Zombie.hpp"

Zombie::Zombie( std::string name ): _name(name) {
}

Zombie::~Zombie( void ) {
    std::cout << this->_name + " has died" << std::endl;
}

void   Zombie::annouce( void ) {
    std::cout << this->_name + ": BraiiiiiiinnnzzzZ..." << std::endl;
}
