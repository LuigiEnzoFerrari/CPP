#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap() {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "default ScavTrap constructor has been called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap( name ) {
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << "name ScavTrap constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "default ScavTrap destructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap& rhs ) {
	if (this != &rhs) {
        this->_attackDamage = rhs._attackDamage;
        this->_energyPoints = rhs._energyPoints;
        this->_hitPoints = rhs._hitPoints;
	}
	return (*this);
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap(src) {
	std::cout << "Copy ScavTrap constructor has been called" << std::endl;
    this->_attackDamage = src._attackDamage;
    this->_energyPoints = src._energyPoints;
    this->_hitPoints = src._hitPoints;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void    ScavTrap::attack(  std::string const& target ) {
	if (this->_energyPoints == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	std::cout <<
		"ScavTrap " + this->_name + " attacks " + target +
		", causing " + std::to_string(this->_attackDamage) +
		" points of damage!"
		<< std::endl;
		this->_energyPoints--;
}