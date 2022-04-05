#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ): ClapTrap() {
	ClapTrap::_name = "lenzo";
	FragTrap fragTrap(_name);

	this->_hitPoints = FragTrap::_hitPointsFrag;
	this->_energyPoints = ScavTrap::_energyPointsScav;
	this->_attackDamage = FragTrap::_attackDamageFrag;
	std::cout << "Default DiamondTrap constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap( std::string name ):
	ClapTrap( name + "_clap_name") {

	this->_name = name;
	this->_hitPoints = FragTrap::_hitPointsFrag;
	this->_energyPoints = ScavTrap::_energyPointsScav;
	this->_attackDamage = FragTrap::_attackDamageFrag;
	std::cout << "Name DiamondTrap constructor has been called" << std::endl;
}

DiamondTrap::DiamondTrap( DiamondTrap const &src ): ClapTrap( src ), FragTrap( src ), ScavTrap( src ) {
	*this = src;
	std::cout << "Copy DiamondTrap constructor has been called" << std::endl;
}

DiamondTrap::~DiamondTrap( void ) {
	std::cout << "Default DiamondTrap destructor has been called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=( const DiamondTrap& rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_attackDamage = rhs._attackDamage;
	}
	return (*this);
}

void    DiamondTrap::whoAmI( void ) const {
    std::cout << "I am a DiamondTrap named " << this->_name << std::endl;
    std::cout << "I am a ClapTrap named " << ClapTrap::_name << std::endl;
}

std::string DiamondTrap::getName( void ) const {
	return (this->_name);
}
