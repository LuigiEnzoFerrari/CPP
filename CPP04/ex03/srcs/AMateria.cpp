#include "AMateria.hpp"

AMateria::AMateria( void ) {
	std::cout << "Default AMateria contructor has been called!" << std::endl;
}

AMateria::AMateria( std::string const & type ) {
	std::cout << "AMateria constructor has been called!" << std::endl;
	this->_type = type;
}

AMateria::AMateria(const AMateria& src) {
	this->_type = src._type;
	std::cout << "Copy AMateria Constructor has been called!" << std::endl;
}

AMateria::~AMateria( void ) {
	std::cout << "AMateria Destructor has been called!" << std::endl;
}

AMateria &AMateria::operator=( const AMateria& rhs ) {
	if (this != &rhs) {
	}
	return (*this);
}

std::string const& AMateria::getType( void ) const {
	return this->_type;
}
