#include "Cat.hpp"

Cat::Cat(): Animal("Cat") {
	std::cout << "Default Cat contructor has been called!" << std::endl;
}

Cat::Cat(Cat const &src) {
	std::cout << "Copy Cat Constructor has been called!" << std::endl;
	this->type = src.type;
}

Cat::~Cat() {
	std::cout << "Cat Destructor has been called!" << std::endl;
}

Cat &Cat::operator=(const Cat& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miauu Miauu" << std::endl;
}
