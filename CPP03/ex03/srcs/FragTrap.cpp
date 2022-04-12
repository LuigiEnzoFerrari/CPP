#include "FragTrap.hpp"

_uint FragTrap::_hitPointsFrag = 100;
_uint FragTrap::_energyPointsFrag = 100;
_uint FragTrap::_attackDamageFrag = 30;

FragTrap::FragTrap( void ): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Default FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name ) {
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << "Name FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap( src ) {
	std::cout << "Copy FragTrap constructor has been called" << std::endl;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Default FragTrap destructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap& rhs ) {
	if (this != &rhs) {
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
	}
	return (*this);
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "I request the highest of fives!" << std::endl;
}
