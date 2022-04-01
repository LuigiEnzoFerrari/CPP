#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& gun): _name(name), _gun(gun) {
}

void	HumanA::attack( void ) {
	std::string gun = this->_gun.getType();
	std::cout << this->_name + " attacks with their " + gun << std::endl;
}
