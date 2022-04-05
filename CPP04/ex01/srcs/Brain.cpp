#include "Brain.hpp"

Brain::Brain( void ) {
	std::cout << "Default Brain constructor has been called!" << std::endl;
}

Brain::Brain( Brain const &src ) {
	std::cout << "Copy Brain constructor has been called!" << std::endl;
	for (int i = 0; i < 100; i++) {
		this->ideas[i] = src.ideas[i];
	}
}

Brain::~Brain( void ) {
	std::cout << "Brain destructor has been called!" << std::endl;
}

Brain &Brain::operator=( const Brain& rhs ) {
	if (this != &rhs) {
		for (int i = 0; i < 100; i++) {
			this->ideas[i] = rhs.ideas[i];
		}
	}
	return (*this);
}
