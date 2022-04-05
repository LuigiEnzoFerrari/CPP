#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) {
	std::cout << "MateriaSource created" << std::endl;
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {
	for (int i = 0; i < 4; i++)
		this->_inventory[i] = src._inventory[i];
}

MateriaSource& MateriaSource::operator=( MateriaSource const & rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 4; i++)
			this->_inventory[i] = rhs._inventory[i];
	}
	return *this;
}

MateriaSource::~MateriaSource( void ) {
	std::cout << "MateriaSource destroyed" << std::endl;
}

void    MateriaSource::learnMateria(AMateria* m) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == m) {
			std::cout << "Materia already learned" << std::endl;
			return ;
		}
	}
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] == NULL) {
			this->_inventory[i] = m;
			std::cout << "Materia " << m->getType() << " learned" << std::endl;
			return ;
		}
	}
	std::cout << "MateriaSource is full" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type) {
	for (int i = 0; i < 4; i++) {
		if (this->_inventory[i] != NULL && this->_inventory[i]->getType() == type) {
			return this->_inventory[i]->clone();
		}
	}
	std::cout << "No materia of type " << type << " in inventory" << std::endl;
	return NULL;
}