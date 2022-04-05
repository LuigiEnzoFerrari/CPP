#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat"), brain_(new Brain()) {
	std::cout << "Default Cat contructor has been called!" << std::endl;
}

Cat::Cat(const Cat& src): Animal( src ) {
	std::cout << "Copy Cat Constructor has been called!" << std::endl;
	this->type = src.type;
	this->brain_ = new Brain(*src.brain_);
}

Cat::~Cat( void ) {
	std::cout << "Cat Destructor has been called!" << std::endl;
	delete this->brain_;
}

Cat&	Cat::operator=(const Cat& rhs) {
	std::cout << "Cat Copy assignment operator has been called" << std::endl;
	if (this != &rhs) {
		this->type = rhs.type;
		this->brain_ = new Brain(*rhs.brain_);

	}
	return (*this);
}

void	Cat::makeSound( void ) const {
	std::cout << "Miauu Miauu" << std::endl;
}

void	Cat::setIdea( int index, std::string idea ) const {
	this->brain_->ideas[index % 100] = idea;
}

std::string	Cat::getIdea( int index ) const {
	return (this->brain_->ideas[index % 100]);
}
