#include "FragTrap.hpp"

FragTrap::FragTrap( void ): ClapTrap() {
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
	std::cout << "default FragTrap constructor has been called" << std::endl;
}

FragTrap::FragTrap( std::string name ): ClapTrap( name ) {
	this->hit_points_ = 100;
	this->energy_points_ = 100;
	this->attack_damage_ = 30;
	std::cout << "name FragTrap constructor has been called" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "default FragTrap destructor has been called" << std::endl;
}

FragTrap &FragTrap::operator=( const FragTrap& rhs ) {
	if (this != &rhs) {
        this->attack_damage_ = rhs.attack_damage_;
        this->energy_points_ = rhs.energy_points_;
        this->hit_points_ = rhs.hit_points_;
	}
	return (*this);
}

FragTrap::FragTrap( FragTrap const &src ) {
	std::cout << "Copy FragTrap constructor has been called" << std::endl;
    this->attack_damage_ = src.attack_damage_;
    this->energy_points_ = src.energy_points_;
    this->hit_points_ = src.hit_points_;
}

void	FragTrap::highFiveGuys( void ) {
	std::cout << "I request the highest of fives!" << std::endl;
}
