#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): _name("lenzo"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ): _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Name ClapTrap constructor has been called" << std::endl;
}

ClapTrap::~ClapTrap( void ) {
	std::cout << "Default ClapTrap destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap& rhs ) {
	if (this != &rhs) {
		this->_attackDamage = rhs._attackDamage;
		this->_energyPoints = rhs._energyPoints;
		this->_hitPoints = rhs._hitPoints;
		this->_name = rhs._name;
	}
	return ( *this );
}

ClapTrap::ClapTrap( ClapTrap const &src ) {
	std::cout << "Copy ClapTrap constructor has been called" << std::endl;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->_energyPoints == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	std::cout <<
		"ClapTrap " + this->_name + " attacks " + target +
		", causing " +  std::to_string(this->_attackDamage) +
		" points of damage!"
		<< std::endl;
		this->_energyPoints--;
}

void	ClapTrap::beRepaired( uint32_t amount ) {
	if (this->_energyPoints == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	this->_hitPoints += amount;
	this->_energyPoints--;
	std::cout
		<< "ClapTrap " << this->_name
		<< " recovery " << std::to_string(amount)
		<< std::endl;
}

void    ClapTrap::takeDamage( uint32_t amount ) {
	if (_hitPoints >= amount)
		this->_hitPoints -= amount;
	else
		this->_hitPoints = 0;
	std::cout << "ClapTrap " + this->_name
		<< " takes " + std::to_string(amount)
		<< std::endl;
}

uint32_t ClapTrap::getHitPoints( void ) const {
	return (this->_hitPoints);
}

uint32_t ClapTrap::getEnergyPoints( void ) const {
	return (this->_energyPoints);
}

std::string ClapTrap::getName( void ) const {
	return (this->_name);
}

uint32_t ClapTrap::getAttackDamage( void ) const {
	return (this->_attackDamage);
}

