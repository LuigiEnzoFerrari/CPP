#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed( void ): value(0) {
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int raw ) {
	std::cout << "Int constructor called" << std::endl;
    this->setRawBits( raw << Fixed::bits );
}

Fixed::Fixed( const float raw ) {
	std::cout << "Float constructor called" << std::endl;
    this->setRawBits( (int)roundf(raw * (1 << Fixed::bits)) );
}

Fixed	&Fixed::operator=( const Fixed& rhs ) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->value = rhs.getRawBits();
	return (*this);
}

std::ostream& operator<<( std::ostream& os, const Fixed& src ) {
    os << src.toFloat();
    return (os);
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}
// Create a copy of all the content of class passed;

Fixed::Fixed( Fixed const &src ) {
	std::cout << "Copy constructor called" << std::endl;
	this->value = src.value;
	*this = src;
}

int	Fixed::getRawBits() const {
	return ( this->value );
}

void	Fixed::setRawBits( int const raw ) {
	this->value = raw;
}

int	Fixed::toInt( void ) const {
	return ( roundf(this->value >> Fixed::bits) );
}

float	Fixed::toFloat( void ) const {
	return ( (float)this->value / ((float)(1 << Fixed::bits)) );
}
