#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ): name_("lenzo"), hit_points_(10), energy_points_(10), attack_damage_(0) {
	std::cout << "default ClapTrap constructor has been called" << std::endl;
}

ClapTrap::ClapTrap( const std::string name ): name_(name), hit_points_(10), energy_points_(10), attack_damage_(0) {
}

ClapTrap::~ClapTrap() {
	std::cout << "default ClapTrap destructor has been called" << std::endl;
}

ClapTrap &ClapTrap::operator=( const ClapTrap& rhs ) {
	if (this != &rhs) {
		this->attack_damage_ = rhs.attack_damage_;
		this->energy_points_ = rhs.energy_points_;
		this->hit_points_ = rhs.hit_points_;
		this->name_ = rhs.name_;
	}
	return (*this);
}

ClapTrap::ClapTrap( ClapTrap const &src ) {
	std::cout << "Copy ClapTrap constructor has been called" << std::endl;
	this->attack_damage_ = src.attack_damage_;
	this->energy_points_ = src.energy_points_;
	this->hit_points_ = src.hit_points_;
}

void	ClapTrap::attack( const std::string& target ) {
	if (this->energy_points_ == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	std::cout <<
		"ClapTrap " + this->name_ + " attacks " + target +
		", causing " +  std::to_string(this->attack_damage_) +
		" points of damage!"
		<< std::endl;
		this->energy_points_--;
}

void	ClapTrap::beRepaired( uint32_t amount ) {
	if (this->energy_points_ == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	this->hit_points_ += amount;
	std::cout << "ClapTrap " + this->name_ + " recovery " + std::to_string(amount) +
		". Hit Points: " + std::to_string(this->hit_points_) + ", Energy Points: "
		+ std::to_string(this->energy_points_)
		<< std::endl;
		this->energy_points_--;
}

void    ClapTrap::takeDamage( uint32_t amount ) {
	if (this->energy_points_ == 0) {
		std::cout << "There is no energy_points left." << std::endl;
		return ;
	}
	if (hit_points_ >= amount)
		this->hit_points_ -= amount;
	else
		this->hit_points_ = 0;
	std::cout << "ClapTrap " + this->name_ + " takes " + std::to_string(amount) +
		" of damage, Hit Points: " + std::to_string(this->hit_points_) +
		" Energy points: " + std::to_string(this->energy_points_)
		<< std::endl;
}
