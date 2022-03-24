#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(): type( "" ) {
	std::cout << "Default WrongAnimal constructor has been called!" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string name ): type( name ) {
	std::cout << "Name WrongAnimal constructor has been called!" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal const &src ) {
	std::cout << "Copy WrongAnimal constructor has been called!" << std::endl;
	this->type = src.type;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal destructor has been called!" << std::endl;
}

WrongAnimal &WrongAnimal::operator=( const WrongAnimal& rhs ) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

std::string   WrongAnimal::getType( void ) const {
    return (this->type);
}

void	WrongAnimal::makeSound( void ) const {
	std::cout << "Cof Cof" << std::endl;
}
