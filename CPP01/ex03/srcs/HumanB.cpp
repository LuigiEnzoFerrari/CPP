#include "HumanB.hpp"

HumanB::HumanB(std::string name): _name(name), _gun(NULL) {
}

HumanB::HumanB(std::string name, Weapon* gun): _name(name), _gun(gun) {
}

void	HumanB::attack( void ) {
    if (this->_gun == NULL)
        std::cout << this->_name
            << " attacks with his bare hands"
            << std::endl;
    else
        std::cout << this->_name
            << " attacks with their "
            << this->_gun->getType()
            << std::endl;
}

void	HumanB::setWeapon(Weapon& gun) {
	this->_gun = &gun;
}
