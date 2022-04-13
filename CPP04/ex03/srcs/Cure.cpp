#include "Cure.hpp"

Cure::Cure( void ): AMateria("cure") {
	std::cout << "Cure created" << std::endl;
}

Cure::Cure( Cure const & src ): AMateria(src) {
}

Cure& Cure::operator=( Cure const & rhs ) {
	if (this != &rhs) {
	}
	return (*this);
}

Cure::~Cure( void ) {
	std::cout << "Cure destroyed" << std::endl;
}

Cure* Cure::clone( void ) const {
	return new Cure(*this);
}

void    Cure::use(ICharacter& target) {
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}
