#include "Character.hpp"

Character::Character( void ): _name("lenzo") {
	std::cout << "Character created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( std::string  const name ): _name(name) {
	std::cout << "Character with name created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

Character::Character( Character const & src ): _name(src._name) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
}

Character& Character::operator=( Character const & rhs ) {
	if (this != &rhs) {
		this->_name = rhs._name;
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

Character::~Character( void ) {
	std::cout << "Character destroyed" << std::endl;
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL) {
			delete this->_inventory[i];
			this->_inventory[i] = NULL;
		}
	}
}

std::string const& Character::getName( void ) const {
	return this->_name;
}

void    Character::equip(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == m) {
			std::cout << "This materia is already in the inventory" << std::endl;
			return ;
		}
	}

	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " added to inventory" << std::endl;
			return ;
		}
	}
	std::cout << "Inventory is full" << std::endl;
}

void	Character::unequip(int idx) {
	if (idx < 0 || idx > 3) {
		std::cout << "Invalid index" << std::endl;
	} else if (this->_inventory[idx] == NULL) {
		std::cout << "No materia in this slot" << std::endl;
	} else {
		std::cout
			<< "Materia "
			<< this->_inventory[idx]->getType()
			<< " with index "
			<< idx
			<< " removed from inventory" << std::endl;
		this->_inventory[idx] = NULL;
	}
}

void	Character::use(int idx, ICharacter& target) {
	if (idx < 0 || idx > 3) {
		std::cout << "Invalid index" << std::endl;
	} else if (this->_inventory[idx] == NULL) {
		std::cout << "No materia in this slot" << std::endl;
	} else
		this->_inventory[idx]->use(target);
}
