#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ): ClapTrap() {
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
	std::cout << "default ScavTrap constructor has been called" << std::endl;
}

ScavTrap::ScavTrap( std::string name ): ClapTrap( name ) {
	this->hit_points_ = 100;
	this->energy_points_ = 50;
	this->attack_damage_ = 20;
	std::cout << "name ScavTrap constructor has been called" << std::endl;
}

ScavTrap::~ScavTrap( void ) {
	std::cout << "default ScavTrap destructor has been called" << std::endl;
}

ScavTrap &ScavTrap::operator=( const ScavTrap& rhs ) {
	if (this != &rhs) {
        this->attack_damage_ = rhs.attack_damage_;
        this->energy_points_ = rhs.energy_points_;
        this->hit_points_ = rhs.hit_points_;
	}
	return (*this);
}

ScavTrap::ScavTrap( ScavTrap const &src ): ClapTrap(src) {
	std::cout << "Copy ScavTrap constructor has been called" << std::endl;
    this->attack_damage_ = src.attack_damage_;
    this->energy_points_ = src.energy_points_;
    this->hit_points_ = src.hit_points_;
}

void	ScavTrap::guardGate( void ) {
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}
