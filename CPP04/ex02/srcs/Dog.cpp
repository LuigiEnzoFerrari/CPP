#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog"), brain_(new Brain()) {
	std::cout << "Default Dog contructor has been called!" << std::endl;
}

Dog::Dog(const Dog& src): Animal( src ) {
	std::cout << "Copy Dog Constructor has been called!" << std::endl;
	this->type = src.type;
    this->brain_ = new Brain(*src.brain_);
}

Dog::~Dog( void ) {
	std::cout << "Dog Destructor has been called!" << std::endl;
    delete this->brain_;
}

Dog &Dog::operator=(const Dog& rhs) {
	if (this != &rhs) {
		this->type = rhs.type;
        this->brain_ = new Brain(*rhs.brain_);
	}
	return (*this);
}

void	Dog::makeSound( void ) const {
	std::cout << "Au Au au" << std::endl;
}

void	Dog::setIdea( int index, std::string idea ) const {
	this->brain_->ideas[index % 100] = idea;
}

std::string	Dog::getIdea( int index ) const {
	return (this->brain_->ideas[index % 100]);
}
