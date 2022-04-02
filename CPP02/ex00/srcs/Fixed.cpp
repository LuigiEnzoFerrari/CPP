#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed(void): _value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( Fixed const &src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void ) {
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=( const Fixed& rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_value = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}