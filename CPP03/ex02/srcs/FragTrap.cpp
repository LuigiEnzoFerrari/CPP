#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
	std::cout << "Default FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name ) {
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
	std::cout << "Name FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap( FragTrap const &src ): ClapTrap( src ) {
	std::cout << "Copy FragTrap constructor has been called" << std::endl;
	this->attack_damage_ = src.attack_damage_;
	this->energy_points_ = src.energy_points_;
	this->hit_points_ = src.hit_points_;
}

FragTrap::~FragTrap( void ) {
	std::cout << "Default FragTrap destructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap& rhs ) {
	if (this != &rhs) {
		this->attack_damage_ = rhs.attack_damage_;
		this->energy_points_ = rhs.energy_points_;
		this->hit_points_ = rhs.hit_points_;
	}
	return (*this);
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "I request the highest of fives!" << std::endl;
}
