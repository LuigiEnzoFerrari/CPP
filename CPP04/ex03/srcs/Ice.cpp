#include "Ice.hpp"

Ice::Ice( void ): AMateria("ice") {
	std::cout << "Ice created" << std::endl;
}

Ice::Ice( Ice const & src ): AMateria(src) {
}

Ice&	Ice::operator=( Ice const & rhs ) {
	if (this != &rhs) {
	}
	return (*this);
}

Ice::~Ice( void ) {
	std::cout << "Ice destroyed" << std::endl;
}

Ice*	Ice::clone( void ) const {
	return new Ice(*this);
}

void	Ice::use(ICharacter& target) {
	std::cout
		<< "* shoots an "
		<< this->getType()
		<<" ice bolt at "
		<< target.getName()
		<< " *" << std::endl;
}
