#include "Animal.hpp"

Animal::Animal( void ): type( "" ) {
	std::cout << "Default Animal constructor has been called!" << std::endl;
}

Animal::Animal( const std::string name ): type( name ) {
	std::cout << "Name Animal constructor has been called!" << std::endl;
}

Animal::Animal( Animal const &src ) {
	std::cout << "Copy Animal constructor has been called!" << std::endl;
	this->type = src.type;
}

Animal::~Animal( void ) {
	std::cout << "Animal destructor has been called!" << std::endl;
}

Animal &Animal::operator=( const Animal& rhs ) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

std::string   Animal::getType( void ) const {
    return (this->type);
}

void	Animal::makeSound( void ) const {
	std::cout << "Pru pru" << std::endl;
}
