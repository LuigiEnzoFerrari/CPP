#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal( "WrongCat" ) {
	std::cout << "Default WrongCat contructor has been called!" << std::endl;
}

WrongCat::WrongCat( WrongCat const &src ): WrongAnimal(src) {
	std::cout << "Copy WrongCat Constructor has been called!" << std::endl;
	this->type = src.type;
}

WrongCat::~WrongCat( void ) {
	std::cout << "WrongCat Destructor has been called!" << std::endl;
}

WrongCat &WrongCat::operator=( const WrongCat& rhs ) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

void	WrongCat::makeSound( void ) const {
	std::cout << "Miau Miau" << std::endl;
}
