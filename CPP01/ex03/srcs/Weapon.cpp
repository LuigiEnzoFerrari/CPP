#include "Weapon.hpp"

Weapon::Weapon( std::string type ): _type(type) {
}

std::string const Weapon::getType( void ) {
	return (this->_type);
}

void    Weapon::setType( std::string type ) {
	this->_type = type;
}
