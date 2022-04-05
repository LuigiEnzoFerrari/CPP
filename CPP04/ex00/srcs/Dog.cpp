#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog") {
	std::cout << "Default Dog contructor has been called!" << std::endl;
}

Dog::Dog(Dog const &src): Animal(src) {
	std::cout << "Copy Dog Constructor has been called!" << std::endl;
	this->type = src.type;
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor has been called!" << std::endl;
}

Dog &Dog::operator=( const Dog& rhs ) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Au Au au" << std::endl;
}
